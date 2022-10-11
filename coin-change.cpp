class Solution {
public:
    int f(int ind,int t,vector<int>& coins, vector<vector<int>>& dp)
    {
        if(ind==0)
        {
            if(t%coins[ind]==0)
                return (t/coins[ind]);
            else
                return 1e9;
        }
        if(dp[ind][t]!=-1)
            return dp[ind][t];
        int not_take=0+f(ind-1,t,coins,dp);
        int take=INT_MAX;
        if(coins[ind]<=t)
        {
            take=1+f(ind,t-coins[ind],coins,dp);
        }
        return dp[ind][t]=min(take,not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int t=0;t<=amount;t++)
        {
            if(t%coins[0]==0)
                dp[0][t]=t/coins[0];
            else
                dp[0][t]=1e9;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int t=0;t<=amount;t++)
            {
              int not_take=0+dp[ind-1][t];
              int take=INT_MAX;
              if(coins[ind]<=t)
              {
               take=1+dp[ind][t-coins[ind]];
              }
          dp[ind][t]=min(take,not_take);
            }
        }
        int ans=dp[n-1][amount];
        if(ans>=1e9)
            return -1;
        return ans;
        
    }
};
