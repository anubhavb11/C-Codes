#include<iostream>
using namespace std;
int main(){
    int ans=0;
    int p=1;
    int n;
    cin>>n;
    while(n>0){
        int last_bit = (n&1);
        ans = ans + p*last_bit;
        p=p*10;
        n= n>>1;

    }
    cout<<ans;
}