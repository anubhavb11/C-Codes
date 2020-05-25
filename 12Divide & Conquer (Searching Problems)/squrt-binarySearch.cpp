#include<iostream>
using namespace std;

int findSqurt(int n){
    int s=0;
    int e=n;
    int store;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid*mid==n){
           return mid;        // Return if found the perfect square 
        }
        else if(mid*mid > n){
            e=mid-1;
        }
        else if(mid*mid < n){
            store=mid;
            s=mid+1;
        }
    }
    return store;
}
int main(){
    int n;
    cin>>n;

    cout<<findSqurt(n);
}