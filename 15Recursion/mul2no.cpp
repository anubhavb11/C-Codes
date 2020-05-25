#include<iostream>
using namespace std;

int mul(int a,int b){
    int x=a;
    int y=b;
    if(a==0||b==0){
        return 0;
    }
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }

    int ans=mul(a,b-1);
    a=a+ans;
    if(x<0 && y<0){
        return a;
    }
    else if(x<0 || y<0  ){
        return -a;
    }
    else{
        return a;
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
}