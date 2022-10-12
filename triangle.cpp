class Solution {
public:
    int f(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>>& dp)
    {
        if(i==n-1)
            return triangle[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int down=triangle[i][j]+f(i+1,j,triangle,n,dp);
        int diagonal=triangle[i][j]+f(i+1,j+1,triangle,n,dp);
        return dp[i][j]=min(down,diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> front(n,-1),curr(n,-1);
        for(int j=0;j<n;j++)
            front[j]=triangle[n-1][j];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=triangle[i][j]+front[j];
                int diagonal=triangle[i][j]+front[j+1];
                curr[j]=min(down,diagonal);
            }
            front=curr;
        }
        return front[0];
    }
    // tc=o(n*n)
    // sc=o(n)    
};
