#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        //Spaces
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<"  ";
        }
        //Inc Numbers
        int val=i;
        for(int cnt=1;cnt<=i;cnt++){
            cout<<val<<" ";
            val=val+1;
        }
        val=val-2;
        for(int cnt=1;cnt<=i-1;cnt++){
            cout<<val<<" ";
            val=val-1;
        }
        cout<<endl;
   

    }

    
}