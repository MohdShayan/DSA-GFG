/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        Node *temp=headRef;
        while(temp!=NULL && temp->next!=NULL){
            Node *nxtNode = temp->next;
            while(nxtNode!=NULL && temp->data==nxtNode->data){
                Node *dup = nxtNode;
                nxtNode=nxtNode->next;
                delete(dup);
                
            }
            temp->next=nxtNode;
            if(nxtNode) nxtNode->prev=temp;
            temp=nxtNode;
        }
        return headRef;
    }
};