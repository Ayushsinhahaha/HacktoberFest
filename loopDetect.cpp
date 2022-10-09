#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        while(this->next!=NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"the value deleted is: "<<value<<endl;
    }
};


//inserting function
void insertnode(node* &tail,int element,int d){
    //empty node
    if(tail == NULL){
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else{

        node* curr = tail;
        while(curr->data!=element){
            curr = curr->next;
        }

        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void deletenode(node* &tail,int val){
    //if node is empty
    if(tail == NULL){
        cout<<"there is no circular linklist"<<endl;
    }

    //not empty
    else{
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data!= val){
            prev = curr;
            curr = curr->next;
        }

        if(tail == curr){
            tail = prev;
        }
        prev -> next = curr->next;
        prev = tail;
        curr->next = NULL;
        delete curr;
    }
}

bool detectloop(node* head){
    if(head == NULL){
        return false;
    }

    map<node*,bool> visited;
    node* temp = head;

    while(temp!=NULL){
        if(visited[temp] == true){
            cout<<"loop starts from: "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;

}

void print(node* tail){
    node* temp = tail;
     do{
         cout<<tail->data<<" ";
         tail = tail->next;
     }
     while(tail!=temp);
    cout<<endl;
}

int main(){

    node* tail = NULL;
    insertnode(tail,3,1);
    print(tail);
    insertnode(tail,1,2);
    print(tail);
    insertnode(tail,2,3);
    print(tail);
    insertnode(tail,2,5);
    print(tail);
    // deletenode(tail,3);
    // print(tail);
    detectloop(tail);

    return 0;
}