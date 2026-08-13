class Solution {
public:

    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return (double)a.first / a.second > (double)b.first / b.second;
    }

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {

        int n = val.size();

        vector<pair<int, int>> items;
        items.reserve(n);

        for(int i = 0; i < n; i++) {
            items.push_back({val[i], wt[i]});
        }

        sort(items.begin(), items.end(), comp);

        double ans = 0.0;

        for(int i = 0; i < n && capacity > 0; i++) {

            int value = items[i].first;
            int weight = items[i].second;

            if(weight <= capacity) {
                ans += value;
                capacity -= weight;
            }
            else {
                ans += (double)value / weight * capacity;
                capacity = 0;
            }
        }

        return ans;
    }
};