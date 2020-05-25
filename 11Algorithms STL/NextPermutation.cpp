// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t!=0){
// 		int n,arr[100];
// 		cin>>n;
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		cout<<next_permutation(arr,arr+n);
//         for(int i=0;i<n;i++){
//             cout<<endl;
// 			cout<<arr[i]<<" ";
// 		}
// 		t--;
// 	}
// }



#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t!=0){
		int n,arr[10000];       ////////////// array size should be greater as per constraints
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		next_permutation(arr,arr+n);           //////////////// you were displayng this which was wrong
        for(int i=0;i<n;i++){
           
			cout<<arr[i]<<" ";
		}
        cout<<endl;
		t--;
	}
}