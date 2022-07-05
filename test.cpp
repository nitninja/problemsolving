#include<bits/stdc++.h>
using namespace std;

int main(){
  
vector<int> scores;

     int n;
    cin>>n;
    int score;
    vector<int> record;

    for(int i=0;i<n;i++){
        cin>>score;
        scores.push_back(score);
    }
    
    int min,max;
    min=scores[0];
    max=scores[0];
    int mincount=0;
    int maxcount=0;
    for(int i=1;i<scores.size();i++){
         if(scores[i]>max){
            max=scores[i];
            maxcount++;
            cout<<"Max:"<<maxcount<<endl;
        }
        if(scores[i]<min){
            min=scores[i];
            mincount++;
            cout<<"Min:"<<mincount<<endl;
        }    
        
    }

    record.push_back(maxcount);
    record.push_back(mincount);

    for(int i=0;i<record.size();i++){
        cout<<record[i]<<" ";
    }

  
  
  return 0;  
}