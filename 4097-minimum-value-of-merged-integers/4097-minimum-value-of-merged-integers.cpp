class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long ans = LLONG_MAX;

        for( int i = 0; i < nums.size(); i += 2 ) {
            long long a = nums[i];
            long long b = nums[i + 1];

            long long temp = b;

            while(temp>0) {
                a *= 10;
                temp /=10;
            }
            long long merged = a + b;
            ans = min(ans , merged);
        }
        return ans;
    }
};