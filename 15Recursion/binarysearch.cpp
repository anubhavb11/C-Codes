#include<iostream>
using namespace std;

int binarySearch(int *a,int l,int r,int key){
    if(l>r){
        return -1;
    }
    if(r>=l){
        int mid= l +(r-1)/2;

        if(a[mid]==key){
            return mid;
        }

        if(a[mid]>key){
            binarySearch(a,l,mid-1,key);
        }
        else{
            binarySearch(a,mid+1,r,key);
        }
    }




}

int main(){
    int a[]={2,4,5,6,8,9};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<binarySearch(a,0,n,key);
    return 0;

}