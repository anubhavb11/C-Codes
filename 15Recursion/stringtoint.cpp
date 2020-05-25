// #include<iostream>
// using namespace std;

// int stringtoint(char *a,int n,int ans){
//     char arr[]={'0','1','2','3','4','5','6','7','8','9'};
//     if(n==0){
//         return -1;
//     }
//     //int ans=0;

//     for(int i=0;i<10;i++){
//         if(a[0]==arr[i]){
//             ans=ans*10;
//             ans=ans+i;
//         }
//     }
    
//     ans=stringtoint(a+1,n-1,ans);
//     // for(int i=0;i<10;i++){
//     //     if(a[n]==arr[i]){
//     //         ans=ans*10;
//     //         ans=ans+i;
//     //     }
//     // }

//     return ans;


// }

// int main(){
//     char a[100];
//     cin>>a;
//     //int n=sizeof(a)/sizeof(char);
//     int n=0;
//     for(int i=0;a[i]!='\0';i++){
//         n++;
//     }
//     //cout<<n<<endl;
//     cout<<stringtoint(a,n,0);

// }



#include<iostream>
using namespace std;

char arr[]={'0','1','2','3','4','5','6','7','8','9'};
int stringtoint(char *a,int n,int ans, int i ){
    // cout << n<<" ";
    if(n==i){
        return ans;
    }
    //int ans=0;
    // for(int i=0;i<10;i++){
        // if(a[0]==arr[i]){
            int digit = a[i]-'0';
            ans=ans*10+digit;
        // }
    // }   
    return stringtoint(a,n,ans,i+1);
    // return ans;
}

int main(){
    char a[100];
    cin>>a;
    //int n=sizeof(a)/sizeof(char);
    int n=0;
    for(int i=0;a[i]!='\0';i++){
        n++;
    }
    cout<<stringtoint(a,n,0,0);
}