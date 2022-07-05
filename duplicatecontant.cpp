#include<bits/stdc++.h>
using namespace std;

int main(){
  

        vector<int> nums;
        int num;
        int n;
        cin>>n;
        bool dupli;
        for(int i=0;i<n;i++){
            cin>>num;
            nums.push_back(num);
        }
        sort(nums.begin(),nums.end());  
        for(int i=0;i<n-1;i++){

                if(nums[i]==nums[i+1]){
                    dupli==true;
                    break;
                }
                if(i==n-2){
                    dupli==false;
                }  
            }

            cout<<dupli;
         
            
        }
  
