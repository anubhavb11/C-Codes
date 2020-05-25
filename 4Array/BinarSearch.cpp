#include<iostream>
using namespace std;

int Binary(int *arr, int key,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}


int main(){
    int arr[]={5,8,9,65,202,410,580,652};
    int key;
    cin>>key;
    int n=sizeof(arr)/sizeof(int);
    // cout<<n;
    cout<<Binary(arr,key,n);
}