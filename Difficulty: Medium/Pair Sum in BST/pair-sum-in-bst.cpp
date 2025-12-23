/*
Node is as follows
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
    void inorder(Node*root,vector<int>& arr) {
        if (!root) return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    bool findTarget(Node *root, int target) {
        vector<int> arr;
        inorder(root, arr);

        int l = 0, r = arr.size() - 1;
        while (l < r) {
            int sum = arr[l] + arr[r];
            if (sum == target) return true;
            else if (sum < target) l++;
            else r--;
        }
        return false;
    }
};
