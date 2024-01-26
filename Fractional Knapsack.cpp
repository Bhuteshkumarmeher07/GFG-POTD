    static bool comp(Item a, Item b) 
    {
        return ((double) a.value / a.weight) > ((double) b.value / b.weight);   
    }

    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr, arr + n, comp);
        double maxP = 0, currWt = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if(currWt + arr[i].weight <= w) 
            {
                maxP += arr[i].value;
                currWt += arr[i].weight;
            }
            else
            {
                maxP += double((arr[i].value * (w - currWt)) / arr[i].weight);
                break;
            }
        }
        
        return maxP;
    }
