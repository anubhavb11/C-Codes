#include<iostream>
using namespace std;

int search(int *a,int n,int key,int i=0){
    //Base Case
    if(n==i){
        return -1;
    }

    //Recursive case
    if(a[i]==key){
        return i;
    }
    search(a,n,key,i+1);
    

}

int main(){
    int a[]={1,43,24,56,3,25,6,3};
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    int key;
    cin>>key;
    cout<<search(a,n,key);
}