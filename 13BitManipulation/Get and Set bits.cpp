#include<iostream>
using namespace std;


// CHeck odd or not
bool isodd(int n){
    return (n&1);
}

//Find ith bit  or Getbit
int GetBit(int n,int i){
    int mask= 1<<i;
    int bit = (n&mask) > 0 ? 1 : 0;
    return bit;
}


//Placing 1 at certain position or Set BIt
int setBit(int n,int i){
    int mask = 1<<i;
    int ans = n | mask;
    return ans;

}


int main(){
    cout<<isodd(1);
    cout<<endl;
    cout<<GetBit(1,2);
    cout<<endl;
    cout<<setBit(5,1);

}