class Solution {
  public:
    
    struct Meet {
      int start;
      int end;
      int pos;
    };
    
    static bool comp(Meet a, Meet b) {
    if (a.end == b.end)
        return a.pos < b.pos;  
    return a.end < b.end;
}
    
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        int n=s.size();
         vector<Meet> meetings(n);
         
         for(int i=0;i<n;i++){
             meetings[i].start = s[i];
             meetings[i].end=f[i];
             meetings[i].pos=i+1;
         }
         sort(meetings.begin(),meetings.end(),comp);
         int freeTime =meetings[0].end;
         int cnt=1;
         vector<int> order;
         order.push_back(meetings[0].pos);
         
         for(int i=1;i<n;i++){
             if(meetings[i].start> freeTime){
                 cnt++;
                 freeTime = meetings[i].end;
                 order.push_back(meetings[i].pos);
                 
             }
         }
         sort(order.begin(), order.end());
         return order;
        
    }
};