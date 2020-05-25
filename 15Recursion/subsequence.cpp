#include<iostream>
using namespace std;

// void sub(char *in,char *out,int i,int j){

//     //BASE CASE
//     if(in[i]=='\0'){
//         out[j]='\0';
//         cout<<out<<endl;
//         return;
//     }

//     // 1.phela include karnege
//     out[j]=in[i];
//     sub(in,out,i+1,j+1);
//     //2. include nahi karnege
//     sub(in,out,i+1,j);


// }

// int main(){
//     char ar[100],out[100];
//     cin>>ar;

//     sub(ar,out,0,0);
// }


















int a=0;



void sub(char arr[100],char out[100],int i,int j){
    if(arr[i]=='\0'){
        out[j]='\0';
        a++;
        cout<<out<<" ";
        return;
    }
    sub(arr,out,i+1,j);
    out[j]=arr[i];
    sub(arr,out,i+1,j+1);
    arr[i]=out[j];
    
}

int main(){
    char arr[100],out[100];
    cin>>arr;
    sub(arr,out,0,0);
    cout<<endl;
    cout<<a;

}