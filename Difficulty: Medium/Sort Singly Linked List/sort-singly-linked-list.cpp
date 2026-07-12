/* Structure of a Linked List Node
class Node
{
    int data;
    Node next;
    Node(int d) {
       data = d;
       next = nullptr;
    }
};*/
class Solution {
  public:
  
  Node* merge2LinkedList(Node *l1, Node *l2){
        Node *t1= l1;
        Node *t2= l2;
        Node *dummy = new Node(-1);
        Node *temp=dummy;

        while(t1 && t2){
            if(t1->data < t2->data){
                temp->next = t1;
                t1=t1->next;
                temp = temp->next;
            }
            else{
                temp->next = t2;
                t2=t2->next;
                temp=temp->next;
            }
        }
        if(t1){
            temp->next = t1;
        }
        if(t2){
            temp->next = t2;
        }
        return dummy->next;

    }

    Node* getMiddle(Node *head){
        Node *slow =head;
        Node *fast= head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    Node* sortLL(Node* head) {
        // code here
         if(head == NULL || head->next==NULL) return head;
        Node *mid = getMiddle(head);
        Node *lhead = head;
        Node *rhead = mid->next;
        mid->next=NULL;
        lhead =  sortLL(lhead);
        rhead = sortLL(rhead);
        return merge2LinkedList(lhead,rhead);
        
    }
};