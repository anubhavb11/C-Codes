/* Pointer arithmetic in C is defined as follows-

Pointer arithmetic doesn’t allow following operations-

Addition of 2 pointers
1. Multiplication of a pointer with a constant(Integer)
2. Division of a pointer with a constant
3. Pointer arithmetic allows following operations-

Addition of a constant(Integer) to a pointer
1. Subtraction of a constant(Integer) from a pointer
2.Subtraction of 2 pointers
3. Now let’s see what happens in the above 3 operations-

Addition of a constant N to a pointer returns another pointer which holds the address of the element present after N blocks from current memory location in the memory.

Similarly Subtraction of a constant N from a pointer returns another pointer which holds the address of the element present before N blocks in the memory.

Subtraction of 2 pointers returns the number of blocks present between the 2 addresses pointed by the 2 pointers.(which is an integer of course…).

*/


#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a<b;
}
int main(){
    int arr[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(arr)/sizeof(int);

    // bool present = binary_search(arr,arr+n,6);
    // if(present){
    //     cout<<"FOUND";
    // }
    // else{
    //     cout<<"Not found";
    // }

    int key;
    cin>>key;


    int *lb= lower_bound(arr,arr+n,key);   //Give lower bound
    int index=lb-arr;
    cout<<key<<" Is(LB) present at :"<<index<<endl;


    int *ub=upper_bound(arr,arr+n,key);  //Give upperbound
    int index2=ub-arr;
    cout<<key<<" Upper bound is present at :"<<index2<<endl;


    int *lbc=lower_bound(arr,arr+n,key,compare);
    int index3=lbc-arr;
    cout<<"lb is present at "<<index3;


    
}