#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findlcm(vector<int> arr, int n)
{
	int ans = arr[0];

	
	for (int i = 1; i < n; i++)
		ans = (((arr[i] * ans)) /
				(gcd(arr[i], ans)));

	return ans;
}

int main(){
  
vector<int> a;
vector<int> b;
vector<int> c;

 int n,m;
 int lcm;
    cin>>n;
    cin>>m;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    for(int i=0;i<m;i++){
        cin>>num;
        b.push_back(num);
    }
    
     sort(a.begin(),a.end());
     
     sort(b.begin(),b.end());
     
     int highinA,lowinB;
    
     highinA=a.back();
     lowinB=b.front();
     int k = sizeof(a) / sizeof(a[0]);
     printf("%d", findlcm(a, k));
             
        // cout<<lcm;
        
        

        // for(int i=0;i<c.size();i++){
        //     cout<<c[i]<<" ";
           
        // }


    
     
    
  
  
  return 0;  
}