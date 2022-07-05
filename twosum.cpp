#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int target;
    vector<int> nums {2,7,11,13};

    cin>>target;

      int sum=0;
        vector<int> pairs;
        unordered_map<int,int> map;
        
        for(int i=0;i<nums.size()-1;i++){
             sum=0;
            for(int j=i;j<nums.size();j++){
               
                    
                    if(i!=j){
                       sum=nums[i]+nums[j];
                        if(sum==target){
                            pairs.push_back(i);
                            pairs.push_back(j);
                            
                        }
                    }   
                   
            }
            
        }


        for(int i=0;i<pairs.size();i++){
            cout<<pairs[i]<<" ";
        }
  
  
  return 0;  
}