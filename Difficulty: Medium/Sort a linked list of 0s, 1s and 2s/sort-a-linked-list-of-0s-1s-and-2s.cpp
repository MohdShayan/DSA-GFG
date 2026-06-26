/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here

        Node *zerH = new Node(-1);
        Node *oneH = new Node(-1);
        Node *twoH = new Node(-1);
        
        Node *zero = zerH;
        Node *one = oneH;
        Node *two = twoH;
        Node *temp=head;
        
        while(temp){
            if(temp->data == 0){
                zero->next = temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                one->next = temp;
                one=one->next;
            }
            else{
                two->next = temp;
                two=two->next;
            }
            temp=temp->next;
        }
        
        zero->next = (oneH->next)? oneH->next: twoH->next;
        one->next = twoH->next;
        two->next=NULL;
        
        Node *newHead = zerH->next;
        delete(zerH);
           delete(oneH);
              delete(twoH);
        return newHead;
        
    }
};