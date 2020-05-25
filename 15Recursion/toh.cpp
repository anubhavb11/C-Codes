#include<iostream>
using namespace std;

void toh(char src,char helper, char des,int n){
    if(n==0){
        return;
    }

    toh(src,des,helper,n-1);
    cout<<n<<" disk from "<<src<<" to "<<des<<endl;
    toh(helper,src,des,n-1);
}

int main(){
    int n;
    cin>>n;
    toh('A','B','C',n);
    return 0;
}