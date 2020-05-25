#include<iostream>
using namespace std;



void printwords(int n){
    char a[][10]={"Zero","one","two","three","four","five","six","seven","eight","nine"};
    //base case
    if(n==0){
        return;
    }
    //recursivecase
    

    printwords(n/10);
    cout<<a[n%10]<<endl;
    

}
int main(){
    
    int n; 
    cin>>n;
    printwords(n);
    cout<<endl;



}