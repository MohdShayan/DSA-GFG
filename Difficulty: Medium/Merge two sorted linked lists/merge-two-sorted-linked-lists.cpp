/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *res=NULL;
        Node *tail=NULL;
        while(head1 && head2){
            Node *node;
            if(head1-> data <= head2-> data){
                node=head1;
                head1= head1->next;
            }
            else{
               node=head2;
               head2=head2->next;
            }
            
            if(res==NULL){
                res=node;
                tail=node;
            }
            else{
                tail->next=node;
                tail=node;
            }
        }
        if(head1){
            if(res==NULL) return head1;
            tail->next=head1;
        }
        else if(head2){
            if(res==NULL) return head2;
            tail->next=head2;
        }
        
        return res;
        
    }
};