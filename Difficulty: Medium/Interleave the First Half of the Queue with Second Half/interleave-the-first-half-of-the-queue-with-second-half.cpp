class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        queue<int> t1, t2;
        int n = q.size();

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                t1.push(q.front());
            } else {
                t2.push(q.front());
            }
            q.pop();
        }

        while (!t1.empty() && !t2.empty()) {
            q.push(t1.front());
            t1.pop();

            q.push(t2.front());
            t2.pop();
        }
    }
};
