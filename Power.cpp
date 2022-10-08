class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long n1=n;
        
        if(n1<0) //for making power to positive
        {
            n1=(-1)*n1;
        }
        
        while(n1)
        {
            if(n1%2) //case if(1) 
            {
                ans=ans*x;
                n1=n1-1;
            }
            else     //case if(0 or else)
            {
                x=x*x;
                n1=n1/2;
            }
        }
        
        if(n<0)
        {
            ans=double(1.0)/double(ans);
        }
        
        return ans;
    }
};
