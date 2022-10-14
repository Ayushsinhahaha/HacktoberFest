class Solution {
public:
    int getvalue(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default : return -1;
        }
    }
    int romanToInt(string s) {
        int n=s.size(),res=0,current,next,i=0;
        while(i<n){
            if(i==n-1){
                res+=getvalue(s[i]);
                return res;
            }
            current=getvalue(s[i]),next=getvalue(s[i+1]);
            if(current>=next){
                res+=current;
                i++;
            }
            else{
                res+=next-current;
                i+=2;
            }
        }
        return res;
    }
    int main(){
        string s;
        cin>>s;
        cout<< romanToInt(s);
        return 0;
    }
};
