/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        // code here
        Node* curr = head_ref;
        Node* dummy = new Node(0);
        
        while(curr!= nullptr){
            Node* nextNode = curr->next;
            Node* prev=dummy;
            
            while(prev->next!=nullptr && prev->next-> data < curr->data){ prev= prev->next;}
            
            curr->next = prev->next;
            prev->next = curr;
            
            curr=nextNode;
            
        }
        return dummy->next;
    }
};