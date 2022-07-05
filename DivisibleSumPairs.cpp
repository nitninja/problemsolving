#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ar;
    int n,k;
   cin>>n;
    cin>>k;
    
    int sum=0;
    int num;
    int count=0;
    
    for(int i=0;i<n;i++){
        
        cin>>num;
        ar.push_back(num);        
    }
    
    for(int i=0;i<ar.size();i++){
        sum=0;
        for(int j=i+1;j<ar.size();j++){
            sum=ar[i]+ar[j];
            if(sum%k==0){
                count++;
            }
            sum=0;
        }
    }
        cout<<count;
  
  return 0;  
}