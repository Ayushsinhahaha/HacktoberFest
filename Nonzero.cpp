#include<bits/stdc++.h>    
using namespace std;        
#define ll                    long long   
//#define ll                    int
#define pb                    push_back
#define lb                    lower_bound
#define ub                    upper_bound
#define pu                    push
#define db                    double
#define m_p                   make_pair
ll mod = 1e9 + 7;



int main()
{
      ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	
	 ll arr[200001][22];
	 for(ll i=0;i<200001;i++)
	 {
	      for(ll j=0;j<22;j++)
	      arr[i][j]=0;
	 }
	 
      for(ll i=1;i<=200000;i++){
       bitset<22> bset2(i);
       for(ll j=0;j<22;j++)
       {
            if(bset2[j])
            {
               arr[i][j]=arr[i-1][j]+1;  
            }
            else
           {
                 arr[i][j]=arr[i-1][j];  
           }
       }
       
      }
 
      ll t;
      t=1;
    cin>>t;
      ll t1=t;
      while(t1--)
      {
     
      ///your code goes here/////
      
      ll l,r;
      cin>>l;
      cin>>r;
      
      ll ans=INT_MIN;
      for(ll k=0;k<22;k++)
      {
          ll cur=arr[r][k]-arr[l-1][k];
          ans=max(ans,cur);
      }
      
      ll ans1=(r-l)+1;
      ans1-=ans;
      cout<<ans1<<endl;
      
      
    
      
      ///code end here/////////////
      }
      return 0;
}
