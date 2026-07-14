class Node{
    public:
    string data;
    Node *next;
    Node *prev;
    Node(string x): data(x), next(NULL), prev(NULL){}
    
};


class BrowserHistory {
    Node *cPage;
  public:
    // constructor to initialize object with homepage
    BrowserHistory(string homepage) {
        cPage = new Node(homepage);
    }

    
    // visit current url
    void visit(string url) {
        Node *newNode = new Node(url);
        cPage->next = newNode;
        newNode->prev = cPage;
        cPage = newNode;
    }

    // 'steps' move backward in history and return current page
    string back(int steps) {
        while(steps--){
            if(cPage->prev){
                cPage = cPage->prev;
            }
            else{
                break;
            }
        }
        return cPage->data;
    }

    // 'steps' move forward and return current page
    string forward(int steps) {
        while(steps--){
            if(cPage->next){
                cPage = cPage->next;
            }
            else{
                break;
            }
        }
        return cPage->data;
    }
};