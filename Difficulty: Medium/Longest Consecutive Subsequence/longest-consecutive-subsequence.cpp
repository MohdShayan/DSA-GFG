class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        int longest = 1;

        for (int i = 0; i < arr.size(); i++) {
            int x = arr[i];
            int count = 1;

            while (find(arr.begin(), arr.end(), x + 1) != arr.end()) {
                x++;
                count++;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};
