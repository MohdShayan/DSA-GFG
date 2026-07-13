/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
  
  void insertCopy(Node *head){
      Node *temp=head;
      while(temp!=NULL){
          Node *cNode = new Node(temp->data);
          cNode->next=temp->next;
          temp->next= cNode;
          temp=temp->next->next;
      }
  }
  
  void connectRandom(Node *head){
      Node*temp =head;
      while(temp!=NULL){
          Node *copNode = temp->next;
          if(temp->random){
              copNode->random = temp->random->next;
          }
          else{
              copNode->random =NULL;
          }
          temp=temp->next->next;
          
      }
  }
  
  Node *getDeepCopy(Node *head){
      Node* temp =head;
      Node *dummy = new Node(-1);
      Node *res= dummy;
      
      while(temp!=NULL){
          res->next= temp->next;
          temp->next = temp->next->next;
          res=res->next;
          temp=temp->next;
      }
      return dummy->next;
  }
  
    Node* cloneLinkedList(Node* head) {
        // code here
        insertCopy(head);
        connectRandom(head);
        return getDeepCopy(head);
    }
};