#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s;
    int d; 
    int m;
    int size;
    int num;
    int max_sum=0,sum=0,count=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num;
        s.push_back(num);
    }
    
    cin>>d;
    cin>>m;
    
    for(int i=0;i<m;i++){
        max_sum+=s[i]; 
           }
    if(max_sum==d){
            count++;
        }

cout<<max_sum<<endl;
sum=max_sum;
    
    for(int i=m;i<size;i++){
        int text1=s[i];
        int text2=s[i-m];
        sum+=s[i]-s[i-m];
        // max_sum=max(max_sum,sum);
        if(sum==d){
            count++;
        }
        
        cout<<"sum "<<sum<<"|";
    }
    cout<<endl;
  cout<<count;
  
  return 0;  
}