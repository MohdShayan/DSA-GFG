/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
  Node* reverseLL(Node *head){
    Node *temp=head;
    Node *prev=NULL;
    while(temp){
        Node *nextNode= temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextNode;
    }
    return prev;
}

 Node *getKNode(Node *head,int k){
     k--;
     Node *temp=head;
     while(k>0 && temp!=NULL ){
         k--;
         temp=temp->next;
     }
     return temp;
 }
 
 
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node *temp=head;
        Node *prev=NULL;
        while(temp){
            Node *knode = getKNode(temp,k);
            if(knode==NULL){
                Node* newHead = reverseLL(temp);
                if(prev){
                prev->next = newHead;
                } else {
                head = newHead;
                        }
                break;
            }
            else{
                Node *nextNode = knode->next;
                knode->next=NULL;
                Node *newHead = reverseLL(temp);
                if(temp==head){
                    head=newHead;
                }
                else{
                    prev->next = newHead;
                }
                prev=temp;
                temp=nextNode;
            }
        }
        return head;
        
    }
};