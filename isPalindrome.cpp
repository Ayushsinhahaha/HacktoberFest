bool ispalindrome(string str)
    {
        string per=str;
        reverse(per.begin(),per.end());
        return (per==str);
    }
    
    void func(string s,int index,vector<string>&path,vector<vector<string>>&ans)
    {
        if(index==s.size())
        {
            ans.push_back(path);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(ispalindrome(s.substr(index,i-index+1)))
            {
                path.push_back(s.substr(index,i-index+1));
                func(s,i+1,path,ans);
                path.pop_back();
            }
        }
        return;
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        func(s,0,path,ans);
        return ans;
        
    }
