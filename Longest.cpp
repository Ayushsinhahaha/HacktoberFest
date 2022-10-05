class TrieNode{
    public:
    char data;
    TrieNode** children;
    bool isTerminal;
    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    TrieNode* root;
    public:
    Trie(){
        root = new TrieNode('\0');
    }
    
    //Insert
    void insert(TrieNode* root, string word){
        //Base Case
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }
        int index = word[0]-'a';
        TrieNode* child;
        if(root->children[index]){
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        insert(child, word.substr(1));
    }
    void insert(string word){
        insert(root, word);
    }
    
    
    //Search Prefix
    bool search(TrieNode* root, string word){
        if(word.size() == 0){
            //cout<<"x";
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        if(root->children[index] != NULL && root->children[index]->isTerminal){
            return search(root->children[index], word.substr(1));
        }
        else{
            return false;
        }
    }
    bool search(string word){
        return search(root, word);
        
    }
};




string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie dummy;
    for(auto it : a){
        dummy.insert(it);
    }
    
    int len = 0;
    string ans;
    for(int i=0;i<n;i++){
        if(dummy.search(a[i])){
            if(a[i].length() > len){
                len = a[i].length();
                ans = a[i];
            }
            else if(a[i].length() == len){
                ans = min(ans, a[i]);
            }
        }
    }
    if(ans.size()==0)ans="None";
    return ans;
}
