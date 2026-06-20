/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
    // Your code here
    
    if(head==NULL || head->next==NULL) return NULL;
    
    Node *nHead = head->next;
    nHead->prev=NULL;
    delete(head);
    return nHead;
    
}
