// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        stack<Node *> st;
        vector<int> inorder;
        
        Node *node =root;
        
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else {
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->data);
                node = node->right;
            }
        }
    return inorder;
    }
    
};