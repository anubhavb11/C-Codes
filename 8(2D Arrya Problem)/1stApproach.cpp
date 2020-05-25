#include<iostream>
using namespace std;
int main(){
    // int arr[10][10]= { {1,4,2,5},
    //                    {3,2,5,2},
    //                    {2,8,9,1},
    //                    {8,2,4,1}};

    int arr[100][100]={{1 ,1},
                       {1, 1}};
    int n=2;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int bi=i;bi<n;bi++){
                for(int bj=j;bj<n;bj++){
                    for(int x=i; x<=bi ; x++){
                        for(int y=j ;y<=bj ;y++){
                            sum = sum + arr[x][y];
                        }
                    }
                }
            }
        }
    }
    cout<<sum;
}