class Solution {
  public:
  
  int max_el_row (vector< vector <int>> &mat,int col){
      int ind=-1;
      int max = INT_MIN;
      int n=mat.size();
      for(int i=0;i<n;i++){
          if(mat[i][col]>max){
              max = mat[i][col];
              ind = i;
          }
      }
      return ind;
  }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        int low=0;
        int high= n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            int maxRowInd= max_el_row(mat,mid);
            int left = mid-1>=0 ? mat[maxRowInd][mid-1] : INT_MIN;
            int right = mid+1<n ? mat[maxRowInd][mid+1] : INT_MIN;
            
            if(mat[maxRowInd][mid]>=left && mat[maxRowInd][mid]>=right ){
                return {maxRowInd,mid};
            }
            else if(mat[maxRowInd][mid]<left){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
        
    }
};
