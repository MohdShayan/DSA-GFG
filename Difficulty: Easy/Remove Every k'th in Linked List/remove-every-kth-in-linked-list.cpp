/* Structure for Link list node
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
    Node* deleteK(Node* head, int k) {
        // code here
        
        if(head == NULL) return NULL;

        if(k == 1) return NULL;

        Node* temp = head;
        Node* prev = NULL;
        int cnt = 1;

        while(temp) {
            if(cnt == k) {
                prev->next = temp->next;

                Node* del = temp;
                temp = temp->next;
                delete del;

                cnt = 1;
            } else {
                prev = temp;
                temp = temp->next;
                cnt++;
            }
        }

        return head;
    }
};