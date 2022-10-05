// #include "TrieNode.h"
#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			
				return root -> isTerminal;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    
     bool search(TrieNode *root, string word)
    {
        // base condition
        if(word.size()==0){
           return true;
        }
        //small calculation
        int index=word[0]-'a';
         TrieNode *child;
        if( root -> children[index]!=NULL)
        {
            child=root->children[index];
            return search(child,word.substr(1));
        }
        else
        {
            return false;
        }
        
        
        
    }

	bool patternMatching(vector<string> vect, string pattern) {
		// Complete this function
		// Return true or false
       // cout<<vect.size()<<endl;
       
        for(int i=0;i<vect.size();i++)
        {
             //cout<<vect[i]<<endl;
            string word=vect[i];
            while(word.size()!=0)
            {
               // cout<<word<<endl;
                insertWord(word);
                word=word.substr(1);
            }
        }
      return search(root,pattern);
    
    }
};
