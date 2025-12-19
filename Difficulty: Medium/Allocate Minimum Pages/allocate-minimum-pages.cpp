class Solution {
  public:
  
    int countStudents(vector<int> &arr,int maxPages){
        int student=1;
        long long pagesperstu=0;
        for(int i=0;i<arr.size();i++){
            if(pagesperstu+arr[i]<=maxPages){
                pagesperstu+=arr[i];
            }
            else{
                student++;
                pagesperstu=arr[i];
            }
        }
        return student;
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k>n) return -1;
        
        int low = *max_element(arr.begin(),arr.end());
        int high= accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int students=countStudents(arr,mid);
            if(students>k){low=mid+1;
                
            }
            else{ high=mid-1;}
            
        }
        return low;
        
    }
};