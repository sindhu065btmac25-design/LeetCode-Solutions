class Solution {
public:
    int distinctSubseqII(string s) {
        int MOD = 1e9 + 7;
      
        vector<long long> dp(26, 0);
        long long total = 0; 
        
        for (char c : s) {
            int idx = c - 'a';
            
          
            long long new_subseqs = (total + 1) % MOD;
            
          
            total = (total + new_subseqs - dp[idx] + MOD) % MOD;
     
            dp[idx] = new_subseqs;
        }
        
        return total;
    }
};