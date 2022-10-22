class Solution {
public:
    //Combinatorics   //TC= O(min(m, n))  //SC= O(1)
    long long nCr(long long n, long long r){
       r= min(r, n-r);
       long long res=1;
       for(int i=0;i<r;i++){
           res*=(n-i);
           res/=(i+1);
       }
        return res;
    }
    int uniquePaths(int m, int n) {
        // return nCr(n+m-2, m-1);
         return nCr(n+m-2, n-1);
    }  
    
    
   /*   // DP Sol  //TC= O(m*n)  //SC= O(m*n)
    int helper(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i>=m || j>=n)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        
        if(dp[i][j]!=-1) 
            return dp[i][j];
        
        return dp[i][j]= helper(i+1, j, m, n, dp) + helper(i, j+1, m, n, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp);
    }  */
};