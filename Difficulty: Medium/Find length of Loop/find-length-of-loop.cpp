/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        unordered_map<Node * , int> mpp;
        Node *temp=head;
        int timer=1;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                int val=mpp[temp];
                return timer-val;
            }
            mpp[temp]=timer++;
            temp=temp->next;
        }
        return 0;
    }
};