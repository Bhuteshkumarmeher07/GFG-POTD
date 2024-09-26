    int maxStep(vector<int>& arr) {
        // Your code here
        int steps = 0;
        int maxSteps = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i-1] < arr[i]){
                steps++;
            }
            else{
                maxSteps = max(maxSteps, steps);
                steps = 0;
            }
        }
        maxSteps = max(steps, maxSteps);
        return maxSteps;
    }
