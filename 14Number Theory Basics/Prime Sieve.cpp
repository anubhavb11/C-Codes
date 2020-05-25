#include <iostream>
using namespace std;


void Prime_Sieve(  long long *p){
    //All odd no are prime
    for(  long long i=3; i<=100000;i+=2){
        p[i]=1;
    }
    //sieve
    for(  long long i=3; i<=100000;i+=2){
        //if current no is not marked (it is prime)
        if(p[i]==1){
            for(  long long j= i*i ; j<=100000; j+=i ){
                p[j]=0;
            }
        }
    }

    //Special Case
    p[2]=1;
    p[0]=p[1]=0;

}

int main(){
    long long  p[100000]={0};
    Prime_Sieve(p);
      long long n;
    cin>>n;
    
        if(p[n] == 1){
            cout << n << " is Prime";
        }
        else{
            cout<<" not prime";
        }
    


}