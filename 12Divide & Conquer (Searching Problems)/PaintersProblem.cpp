#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool IsPossible(int np, long long nb,int *arr, int mid){
    int timelaga=0;
    int painthua=0;
    int kitnehue=0;
    int noOfpainters=0;
    int i=0;
    for(int j=0;j<np; j++){
        while(timelaga<=mid && i<=nb){
        timelaga=timelaga+arr[i];
        i++;
    }
    noOfpainters++;
    timelaga=0;
    i--;
    }

    if(noOfpainters<=np){
        return true;
    }     
    else{
        return false;
    }
}


int minTime(int np, long long nb,int *arr){
    int s=0;
    int e= INT_MAX;
    int ans=INT_MAX;
    while(s<=e){
        int mid=(s+e/2);
        if(IsPossible(np,nb,arr,mid)){
            ans = min(ans,mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return ans;
}


int main(){
    int np;
    cin>>np;
    long long  nb;
    cin>>nb;
    int arr[100];

    for(int i=0;i<nb;i++){
        cin>>arr[i];
    }

    cout<<minTime(np,nb,arr);

}