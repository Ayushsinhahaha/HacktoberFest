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
 
      ll t;
      t=1;
    cin>>t;
      ll t1=t;
      while(t1--)
      {
     
      ///your code goes here/////
      char mat[8][8];
      for(int i=0;i<8;i++)
      {
           for(int j=0;j<8;j++)
           cin>>mat[i][j];
      }
      
      bool f1=1;
      for(int i=1;i<7;i++)
      {
           for(int j=1;j<7;j++)
           {
                if(mat[i][j]=='#'&&mat[i-1][j-1]=='#'&&mat[i-1][j+1]=='#'&&mat[i+1][j-1]=='#'&&mat[i+1][j+1]=='#')
                {
                     cout<<i+1<<" "<<j+1<<endl;
                     f1=0;
                     break;
                }
           }
           if(f1==0)
           break;
      }
   
      
      ///code end here/////////////
      }
      return 0;
}
