#include<iostream>
using namespace std;


int zeros(int n){
    int ans=0;
    for(int D=5; n/D>=1; D=D*5){
        ans += n/D;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<zeros(n);
}