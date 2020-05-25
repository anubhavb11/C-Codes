#include<iostream>
using namespace std;

bool solveMaze(char maze[][5],int sol[5][5],int i,int j,int n,int m){
    //Base Case
    if(i==n-1 && j==n-1){
        //Print solution
        sol[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }

    //Recursive case
    sol[i][j]=1;
    //Check right main
    if(maze[i][j+1]!='X' && j+1<m){
        bool kyaRightseansmilla= solveMaze(maze,sol,i,j+1,n,m);
        if(kyaRightseansmilla){
            return true;
        }
    }
    
    //Check for down
    if(maze[i+1][j]!='X' && i+1<n){
        bool kyaneecheserastamilla= solveMaze(maze,sol,i+1,j,n,m);
        if(kyaneecheserastamilla){
            return true;
        }
    }
    sol[i][j]=0;
    return false;
}


int main(){
    char maze[5][5]={"0000",
                     "X000",
                     "00X0",
                     "0X00"};

    int sol[5][5]={0};

    solveMaze(maze,sol,0,0,4,4);

}