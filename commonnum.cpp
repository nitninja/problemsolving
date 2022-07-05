#include<bits/stdc++.h>
using namespace std;

int main(){
  
 vector<int> nums1 {1,2,2,1};
 vector<int> nums2 {2,2};
    vector<int> match;
    sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            
            for(int j=0;j<nums2.size();j++){
             
                if(nums1[i]==nums2[j]){ 
                    
                    if(find(match.begin(),match.end(),nums1[i])==match.end()){
                        match.push_back(nums1[i]);
                    }
                    if((nums1[i]==nums1[i+1])&&(nums2[j]==nums2[j+2])){
                         match.push_back(nums1[i]);
                    }
                }
                
            }            
        }

        for(int i=0;i<match.size();i++){
            cout<<match[i]<<" ";
        }
  
  
  return 0;  
}