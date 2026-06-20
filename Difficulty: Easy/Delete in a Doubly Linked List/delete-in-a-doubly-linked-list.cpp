/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        if(head == NULL) return NULL;
        int cnt=0;
        Node *temp=head;
        while(temp){
            cnt++;
            if(cnt==x) break;
            
            temp=temp->next;
        }
        Node *prevNode = temp->prev;
        Node *nxtNode = temp->next;
        
        if(prevNode == NULL && nxtNode ==NULL) {
            return NULL;
        }
        else if(prevNode ==NULL){
            //delte head
            Node *newHead=head->next;
            newHead->prev=NULL;
            head->next=NULL;
            delete(head);
            return newHead;
            
        }
        else if(nxtNode == NULL){
            //delte tail
            Node *tail =head;
            while(tail->next){
                tail=tail->next;
            }
            Node *newTail = tail->prev;
            newTail->next=NULL;
            tail->prev=NULL;
            delete(tail);
            return head;
        }
        prevNode->next=nxtNode;
        nxtNode->prev=prevNode;
        temp->next=NULL;
        temp->prev==NULL;
        delete(temp);
        return head;
    }
};