/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
    int rec(Node *temp){
        if(temp==NULL){
            return 1;
        }
        int carry = rec(temp->next);
        temp->data= temp->data+carry;
        if(temp->data>=10){
            temp->data=0;
            return 1;
        }
        return 0;
    }
  
    Node* addOne(Node* head) {
        // code here
        int carry;
        Node *temp=head;
        carry = rec(temp);
        if(carry ==1){
            Node *newHead = new Node(1);
            newHead->next=head;
            return newHead;
        }
        return head;
    }
};