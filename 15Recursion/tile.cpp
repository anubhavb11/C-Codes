#include<iostream>
using namespace std;

int tile(int n,int m){
    if(n<m){
        return 1;
    }

    int a=tile(n-1,m);
    int b=tile(n-m,m);
    return a+b;

}

int main(){
    int n;
    cin>>n;
    cout<<tile(n,4);
    return 0;
}
