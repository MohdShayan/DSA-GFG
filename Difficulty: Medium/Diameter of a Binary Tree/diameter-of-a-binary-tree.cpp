/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    int height(Node* node, int& dia){
        if(node==NULL) return 0;
        
        int lh=height(node->left,dia);
        int rh=height(node->right,dia);
        dia = max(dia,lh+rh);
        return 1+max(lh,rh);
    }
  
    int diameter(Node* root) {
        // code here
        int dia=0;
        height(root,dia);
        return dia;
    }
    
    
};