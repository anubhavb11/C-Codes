#include<iostream>
using namespace std;

bool kyaRakhnaSafehain(int board[10][10],int i,int j,int n){
    //ROW and column check krte hain
    for(int k=0;k<n;k++){
        if(board[k][j] || board[i][k]){    //Agar queen rakhi mil gayi
            return false;
        }
    }

    int row=i;
    int col=j;
    //Right Digonal 
    while(row>=0 && col<n){
        if(board[row][col]){
            return false;
        }
        row--;
        col++;
    }
    //Left Digonal
    while(j>=0 &&i>=0){
        if(board[i][j]){
            return false;
        }
        i--;
        j--;
    }

    return true;
}

bool NQueen(int board[10][10],int i,int n){
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false; //Solve ho gaya.
        
    }


    //RECURSIVE CASE
    for(int j=0;j<n;j++){
        if(kyaRakhnaSafehain(board,i,j,n)==true){
            board[i][j]=1;
            bool KyaBakiBaatBani=NQueen(board,i+1,n);
            if(KyaBakiBaatBani){
                return true;
            }
            board[i][j]=0; //Backtracking
        }
    }
    return false;
}


int main(){
    int board[10][10] ={0};
    int n;
    cin>>n;
    NQueen(board,0,n);
}