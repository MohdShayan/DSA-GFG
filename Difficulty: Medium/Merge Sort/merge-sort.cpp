//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  void merge(vector<int>& arr, int low , int mid , int high){
      vector <int> v;
      int left = low ;
      int right = mid+1;
      
      while(left<=mid && right <=high){
          if(arr[left]<=arr[right]){
              v.emplace_back(arr[left]);
              left++;
          }
          else{
              v.emplace_back(arr[right]);
              right++;
          }
      }
      
      while(left<=mid){
          v.emplace_back(arr[left]);
          left++;
      }
      
      while(right<=high){
          v.emplace_back(arr[right]);
          right++;
      }
      
      for(int i =low ;i<=high;i++){
          arr[i] = v[i-low];
      }
      
  }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r) return ;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid );
        mergeSort(arr,mid+1,r );
        
        merge(arr,l,mid,r);
        
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends