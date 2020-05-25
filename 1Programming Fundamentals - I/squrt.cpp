#include<iostream>
using namespace std;
int main(){
    float n,a;
    float inc=0.1;
    cin>>n;
    float i=0;
    for(int j=0;j<3;j++){
        while(i*i<=n){
        i=i+inc;
    }
    i=i-inc;
    inc=inc/10;
   
    }
     cout<<i;
    
}