class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five=0, ten=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5){five++;}
            else if(arr[i]==10){
                if(five>=1){
                    ten++;
                    five--;}
                else return false;
            }
            else{
                //20
                if(ten>=1 && five>=1){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five =  five-3;
                }
                else return false;
            }
        }
        return true;
    }
};