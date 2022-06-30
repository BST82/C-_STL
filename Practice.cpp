 #include<bits/stdc++.h>
    using namespace std;

namespace shri{
    // scope of shri and access this using 
    // shri::getval()
    int val=50;
    int getval(){
        return val*10;
    }
}
    int main(){
cout<<shri::getval()<<endl;
    }