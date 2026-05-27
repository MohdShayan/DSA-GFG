class Solution {
public:
    int toggleBits(int n, int l, int r) {
        int mask = 0;

        for (int i=l;i<=r;i++) {
            mask = mask | (1<<(i-1));
        }

        return n ^ mask;
    }
};