/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        // code here
        if(head ==NULL || head->next==NULL) return NULL;
        Node *slow =head;
        Node *fast=head;
        fast=fast->next->next;
        
        while(fast && fast->next){
            slow =slow->next;
            fast=fast->next->next;
        }
        Node *middle=slow->next;
        slow->next=slow->next->next;
        delete(middle);
        return head;
        
    }
};