class Solution {
  public:
  
    bool canWePlace(vector<int> &position, int dist,int m){
        int last = position[0];
        int count = 1;
        for(int i=0;i<position.size();i++){
            if(position[i]-last>=dist){
                count++;
                last =position[i];
            }
            if(count>=m) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
         sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low=1;
        int ans;
        int high = stalls[n-1]-stalls[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(canWePlace(stalls,mid,k)==true){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};



