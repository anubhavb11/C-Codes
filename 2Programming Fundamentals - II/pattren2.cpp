#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        char alpha='A';
        for(int j=i; j<n; j++){
            cout<<alpha;
            alpha =alpha +1;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern(n);
}