class SpecialStack {
  public:
  stack<long long > st;
  long long mini=LONG_LONG_MAX;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()){
            st.push(x);
            mini=x;
        }
        else{
            if(x<mini){
                st.push(2LL*x-mini);
                mini=x;
            }
            else st.push(x);
        }
    }

    void pop() {
        // Remove the top element from the Stack
        long long  x = st.top();
        st.pop();
        if(x<mini){
            mini = 2LL*mini -x;
        }
    }

    int peek() {
        // Returns top element of the Stack
        if (st.empty())
        return -1;
        long long x = st.top();
        if(mini<x) return x;
        return mini;
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st.empty()) return -1;
        return mini;
    }
};