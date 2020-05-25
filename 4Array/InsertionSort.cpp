#include<iostream>
using namespace std;

void sort(int n,int *arr){
    for(int i=1;i<n;i++){
        int e=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>e)
        {
            swap(arr[j],arr[j+1]);
            j--;
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




/* 6th may 2020
#include <iostream>
using namespace std;

void sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int e=arr[i];
        while(j>=0 && e<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=e;
    }
}

int main() {
    int arr[]={5,4,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}
*/