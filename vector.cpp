#include<iostream>
#include<vector>
using namespace std;

int main(){


 // take the input without using auto 

 /*** 
  int n,a;
    cin>>n;
 vector<int>v1;
   
for(int i=0;i<n;i++ ){
cin>>a;
v1.emplace_back(a);
 }
 ****/

// give output without using auto keyword 

/***
  for(int i=0;i<n;i++ ) {
cout<<v1.at(i)<<" ";
 }

***/

// take input using auto key word 
int n,a;
cin>>n;
vector<int>s;
for(int i=0;i<n;i++ ){
cin>>a;
s.push_back(a);
 }

//  for (auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }

for(auto &it : s){
    cout<<it<<" ";
}
}