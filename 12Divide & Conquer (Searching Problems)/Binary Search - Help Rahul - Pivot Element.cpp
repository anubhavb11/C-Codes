#include<iostream>
using namespace std;

int HelpRahul(int n,int *arr,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>=arr[s]){                       //Should have used =
            if(arr[s]<=key && key<=arr[mid]){           //key should be smaller than arr[mid]
               e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key>=arr[mid]  && key<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;         // try to return evry time 
}

int main(){
    int n,key;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    cin>>key;
    cout<<HelpRahul(n,arr,key);
}