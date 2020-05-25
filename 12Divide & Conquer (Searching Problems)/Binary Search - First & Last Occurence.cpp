#include<iostream>
using namespace std;

int Firstoccurence(int *arr, int n,int key){
    int s=0;
    int e=n-1;
   
    int store;
    while(s<=e){
         int mid=(s+e)/2;
        if(arr[mid]==key){
        store=mid;
        e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    }
    
    return store;
    
}
int Lastoccurence(int *arr, int n,int key){
    int s=0;
    int e=n-1;
   
    int store;
    while (s<=e)
    {
         int mid=(s+e)/2;
         int mid=(s+e)/2;
    if(arr[mid]==key){
        store=mid;
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;

    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    }
    
    return store;
    
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[100];
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    cout<<Firstoccurence(arr,n,key)<<endl;
    cout<<Lastoccurence(arr,n,key)<<endl;
}