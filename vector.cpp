#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,a;
    cin>>n;
 vector<int>v1;
 for(int i=0;i<n;i++ ){
cin>>a;
v1.emplace_back(a);
 }
 for(auto &it:v1){
cout<<it<<" ";
 }
}