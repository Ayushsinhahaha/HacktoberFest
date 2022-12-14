
 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
   if(head1==NULL) return head2;
   if(head2==NULL) return head1;
     
    Node* dummy = new Node(0);
    Node* p = dummy;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <=head2->data){
            p->next = head1;
            head1=head1->next;
        }
        else{
            p->next = head2;
            head2=head2->next;
        }
        p=p->next;
        
    }
    if(head1!=NULL)
    p->next = head1;
    else
    p->next = head2;

return dummy->next;
}  
