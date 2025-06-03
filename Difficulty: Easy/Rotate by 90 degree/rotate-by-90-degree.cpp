
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
       
       //rev col
       for(int j=0;j<n;j++){
           int first=0;
           int last=n-1;
           while(first<last){
                swap(mat[first][j], mat[last][j]);
                first++;
                last--; 
           }
       }
    }
};
