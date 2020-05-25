 //Prefix 1d done below
#include<iostream>
using namespace std;
int main(){
    // int arr[10][10]= { {1,4,2,5},
    //                    {3,2,5,2},
    //                    {2,8,9,1},
    //                    {8,2,4,1}};

    int arr[100][100]={{1,1},
                       {1,1}};
    int n=2;
    int sum[100][100]={0};
    sum[0][0]=arr[0][0];
    int j,i;
    for(i=0;i<n;i++){
        for( j=0;j<n;j++){
            sum[i][j]= sum[i-1][j]+arr[i][j];
        }
        sum[i][j]=sum[i][j-1]+ arr[i][j];
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

   
}



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 // SUM OF 1D array prefix sum 1d
 
 /* #include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4};
    int sum[10]={0};
    sum[0]=arr[0];
    int n=4;
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<sum[i]<<" ";
    }
}  */

