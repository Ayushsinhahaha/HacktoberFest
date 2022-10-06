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
      
   string str;
   cin>>str;
   bool f1=1;
   for(ll i=1;i<str.size();i++)
   {
        ll cur=str[i-1]-'0';
        ll per=cur;
        cur*=10;
        
        cur+=str[i]-'0';
        per+=str[i]-'0';
        
        if(per>cur)
        {
             for(ll j=0;j<i-1;j++)
             cout<<str[j];
             cout<<per;
             for(ll j=i+1;j<str.size();j++)
             cout<<str[j];
             cout<<endl;
             f1=0;
             break;
        }
        
   }
   if(f1)
   {
        for(ll i=str.size()-1;i>0;i--)
       {
        ll cur=str[i-1]-'0';
       
        cur+=str[i]-'0';
        //per+=str[i]-'0';
        
        if(cur>9)
        {
             for(ll j=0;j<i-1;j++)
             cout<<str[j];
             cout<<cur;
             for(ll j=i+1;j<str.size();j++)
             cout<<str[j];
             cout<<endl;
             f1=0;
             break;
        }
        
       }
       if(f1)
       {
            ll n1=str.size();
            str[1]=((str[1]-'0')+(str[0]-'0'))+'0';
             cout<<str.substr(1,n1)<<endl;
       }
        
   }
      
      ///code end here/////////////
      }
      return 0;
}
