/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {

        Node *temp = head;
        int cnt = 0;

        while(temp){
            if(cnt == p) break;
            temp = temp->next;
            cnt++;
        }

        Node *nNode = new Node(x);

        nNode->next = temp->next;
        nNode->prev = temp;

        if(temp->next != NULL){
            temp->next->prev = nNode;
        }

        temp->next = nNode;

        return head;
    }
};