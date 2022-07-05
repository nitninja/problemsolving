#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int type_count[10]={0};
    int n;
    cin>>n;
    
    
    
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    int count=0;
    
    for(int i=0;i<arr.size();i++){
        
        int id=arr[i];
        type_count[id]++;
    }
    int max=0;
    int maximum;
    for(int i=0;i<10;i++){
        if(type_count[i]>max){
            max=type_count[i];
            maximum=i;
        }
    }
  cout<<maximum;
  
  return 0;  
}