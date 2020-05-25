#include<iostream>
using namespace std;

void permute(char *in,int i){
//BASE CASE
if(in[i]=='\0'){
    cout<<in<<" ,";
    return;
}

//Recursion
for(int j=i;in[j]!='\0';j++){
    swap(in[i],in[j]);
    permute(in,i+1);
    //Backtracking
    swap(in[i],in[j]);
}

}

int main(){
    char in[]="fjdskfjksjf";
    permute(in,0);
    return 0;
}