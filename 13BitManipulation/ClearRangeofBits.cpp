#include<iostream>
using namespace std;

int clearLastIbits(int n,int i){
    return ( n & -1<<i);
}

// Clear range of bits 

//0011111
//---j-i-
//1111000  mask-1          
int ClearRangeOfBits(int n,int i ,int j){
    int mask1 = -1<<(j+1);
    int mask2 = (1<<i) -1;
    int mask= mask1 | mask2;
    int ans= n & mask;
    return ans;

}


// place n in m
int place(int n, int m,int i ,int j){
    int mask= m<<i;
    int n_ = ClearRangeOfBits(n,i,j);
    return n_ | mask;
}

int main(){
    cout<<clearLastIbits(5,1);
    cout<<endl;
    cout<<ClearRangeOfBits(5,0,2);
    cout<<endl;
    cout<<place(0,1,0,2);
}