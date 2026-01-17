/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
  int maxP(Node* node, int &maxi){
        if(node==NULL) return 0;
        int leftSum = max(0,maxP(node->left,maxi));
        int rightSum = max(0,maxP(node->right,maxi));
        maxi = max(maxi,leftSum+rightSum+node->data);

        return max(leftSum,rightSum) + node->data;
    }
    
    int findMaxSum(Node *root) {
        int maxi =INT_MIN;
        maxP(root,maxi);
        return maxi;
        
    }
};