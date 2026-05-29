/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node *prev=NULL;
        Node *curr=head;
        while(curr!=NULL){
            Node *nxt= curr->next;
            curr->next= prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
};