// #include<iostream>
// using namespace std;

// void selectionSort(int *arr,int n){
//     int pos=0;
//     int i;
//     for( i=0;i<n;i++){
//         int min_indx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min_indx]>arr[j]){
//                 min_indx=j;
//             }
//         }
//         swap(arr[i],arr[min_indx]);
//     }
// }


// int main(){
//     int arr[]={23,45,22,22,56,33,43,89};
//     int n=sizeof(arr)/sizeof(int);
//     selectionSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;

void sort(int n,int *arr ){
    int indx;
    for(int i=0;i<n;i++){
        indx=i;
        for(int j=i+1; j<n ;j++){
            if(arr[j]<arr[indx]){
                indx=j;
            }
        }
        swap(arr[i],arr[indx]);
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