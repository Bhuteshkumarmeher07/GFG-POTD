class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        return (n >> k & 1);
        // It can be a one liner logic!! Think of it!!
    }
};

// The task is to find whether the bit at the k th index from the right is set or not in the
// binary representation of n.
// The k th bit can be found using right shift operator (>>). This bit is then ANDed with 1 using bitwise
// AND operator (&). The result will be 1(True) if the k th bit is 1 else it will be 0(False).
