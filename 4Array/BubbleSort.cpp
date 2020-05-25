#include<iostream>
using namespace std;

void sort(int n,int *arr){
    for(int i=1;i<n;i++){                //i is starting from 1 because if not n-i witll become n in first itration leads to garbage value
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}




int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}