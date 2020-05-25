#include<iostream>
#include<algorithm>
using namespace std;

bool comapre(int a,int b){
    return a>b;
}

int main(){
    int arr[]={1,55,2,99,34,67,67,88,8,23,23,6};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n,comapre);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

}
