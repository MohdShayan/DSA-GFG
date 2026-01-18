/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        vector<int> result;
        if (root == NULL) return result;

        queue<Node*> nodeQueue;
        nodeQueue.push(root);
        bool leftToRight =true;

        while (!nodeQueue.empty()) {
            int size =nodeQueue.size();
            vector<int> row(size);

            for (int i=0;i<size;i++) {
                Node* node = nodeQueue.front();
                nodeQueue.pop();
                
                int index = leftToRight ?i:(size-i-1);
                row[index] = node->data;

                if (node->left) nodeQueue.push(node->left);
                if (node->right) nodeQueue.push(node->right);
            }

            for (int val :row) result.push_back(val);

            leftToRight=!leftToRight;
        }

        return result;
    }
};
