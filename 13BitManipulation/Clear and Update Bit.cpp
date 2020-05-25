#include<iostream>
using namespace std;


//Clear Bit
int clearBit(int n,int i){
    int mask= ~(1<<i);
    int ans = n & mask;
    return ans;
}

//Update bit with value
int UpdateBit(int n,int i,int v){    // Pass by value because updating value of n
    int Cleared_bit=clearBit(n,i);
    int mask = v<<i;
    int updated=  Cleared_bit | mask;
    return updated;

}


int main(){
    cout<<UpdateBit(5,1,1)<<endl;
    cout<<UpdateBit(0,0,1)<<endl;

}