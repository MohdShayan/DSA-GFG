/* Structure of a Linked List node
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
  Node* reverseList(Node* head) {
      Node *curr=head;
      Node *prev=NULL;
      while(curr){
          Node *nextNode = curr->next;
          curr->next=prev;
          prev=curr;
          curr=nextNode;
      }
      return prev;
  }
    Node *compute(Node *head) {
        // code here
         head = reverseList(head);
         int maxSoFar = head->data;
         Node* curr = head;
         
        while (curr && curr->next) {
        if (curr->next->data < maxSoFar) {
            // Delete node
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
            maxSoFar=curr->data;
        }
    }

    return reverseList(head);
        
    }
};