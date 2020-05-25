#include<iostream>
using namespace std;


void stair(int arr[][4], int n, int key){
    bool found=false;
    int i=0;
    int j=n-1;
    while (found== false || i<n || j<n)
    {
        if(arr[i][j]==key){
            found=true;
            cout<<i<<" "<<j<<endl<<" FOUND";
            return;
        }
        if(arr[i][j]<key){
            i++;
        }
        if(arr[i][j]>key){
            j--;
        }
    }       
    
}



int main(){
    int arr[4][4];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter key";
    cin>>key;

    stair(arr,n,key);


}