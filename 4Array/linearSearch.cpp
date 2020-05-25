#include<iostream>
using namespace std;

int linear(int *arr,int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
            break;
        }
    }
}

int main(){
    int arr[]={5,3,5,21,312,13,32,32,2,31};
    int key;
    cin>>key;
    int n=sizeof(arr)/sizeof(int);
   
    cout<<linear(arr,key,n);
}