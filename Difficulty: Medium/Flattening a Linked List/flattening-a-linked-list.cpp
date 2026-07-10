/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
  
  Node* mergeTwoVll(Node *l1, Node *l2){
      Node *dummy = new Node(-1);
      Node *res=dummy;
      
      while(l1 && l2){
          if(l1->data< l2->data){
              res->bottom=l1;
              res=l1;
              l1=l1->bottom;
          }
          else{
            res->bottom=l2;
              res=l2;
              l2=l2->bottom;
          }
      }
      if(l1) res->bottom=l1;
      if(l2) res->bottom=l2;
      if(dummy->bottom) dummy->bottom->next=NULL;
      
      return dummy->bottom;
  }
  
    Node *flatten(Node *root) {
        // code here
        if(root == NULL || root->next ==NULL) return root;
        Node * mergedHead = flatten(root->next);
        root = mergeTwoVll(mergedHead,root);
        return root;
        
    }
};