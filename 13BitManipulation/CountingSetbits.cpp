#include<iostream>
using namespace std;

// basic count
int basic(int n){
    int ans=0;
    int i=0;
    while(i<32){                   //depend upon sysytem for this i have to use 32 not 64
        if( n & n<<i){
            ans++;
        }
        i++;
    }
    return ans;

}

//Basic count - sir
int basic2(int n){
    int ans=0;
    while(n>0){
        ans = ans + (n&1);
        n = n>>1;

    }
    return ans;
}


//fastCount-my   -- never working leave it
int fastCount(int n){
    int ans=0;
    int i=n-1;
    while(i>=0){
        if(n & i){
            ans++;
            n= n&i;
        }
        i--;
    }
    return ans;
}


//Fast Count sir
int fastCountsir(int n){
    int ans=0;
    while(n>0){
        n= n& (n-1);
        ans++;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<basic(n)<<endl;
    cout<<basic2(n)<<endl;
    cout<<fastCount(n)<<endl;
    cout<<fastCountsir(n)<<endl;

}