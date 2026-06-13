class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        long long t = (long long)n * (n + 1) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
        }
        return t - sum;
    }
};