#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> nums1 {1,2,3,0,0,0};
  int m=3; 
  vector<int> nums2{2,5,6};
  int n=3;
  vector<int> merged;
        
        for(int i=0;i<m;i++){
            
            if(nums1[i]!=0){
        merged.push_back(nums1[i]);    
            }
            
        }
                
        
        // sort(merged.begin(),merged.end());
        
        for(int i=0;i<merged.size();i++){
            cout<<merged[i]<<" ";
        }
  
  
  return 0;  
}