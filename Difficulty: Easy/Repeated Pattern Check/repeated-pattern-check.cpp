class Solution {
  public:
    bool findPattern(string& s) {
        // code here
        stack<char> st;
        for(char c:s){
            if(c=='x') st.push(c);
            else{
                if(st.empty()) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};