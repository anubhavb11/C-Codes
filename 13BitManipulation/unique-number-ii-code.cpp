// my code corrected


#include<iostream>
using namespace std;

int firstsetbit(int ans){
	int i=0;
	int sol=0;
	while(sol!=1){
		sol=ans & 1;
		i++;
		ans = ans>>1;           //ans updating every time. You have left shift the number by 1 bit position in each iteration.
	}
	return i-1;  //we got the ans then updated i also so we return i-1
 
	
}

int main(){
	int n;
	cin>>n;
	int ans=0;
	// int arr[100];
    int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// for(int i=0;i<n-1;i++){
    for(int i=0;i<=n-1;i++){
		// ans = arr[i]^ arr[i+1];
        ans=ans^arr[i];
	}
	// int pos= firstsetbit(n);
	int pos= firstsetbit(ans);
	int a=0,b=0;
	for(int i=0;i<n;i++){
		int num=arr[i];
		if((num>>pos)& 1){
			a  = a ^ arr[i];

		}
		else{
			b= b^ arr[i];
		}

	}

	// cout<<a<<" "<<b;
    cout<<b<<" "<<a;
	

}







/*  My incorrect code 
#include<iostream>
using namespace std;

int firstsetbit(int ans){
	int i=0;
	int sol=0;
	while(sol!=1){
		sol=ans & 1;
		i++;
		ans = ans>>1;           //ans updating every time. You have left shift the number by 1 bit position in each iteration.
	}
	return i-1;  //we got the ans then updated i also so we return i-1
 
	
}

int main(){
	int n;
	cin>>n;
	int ans=0;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		ans = arr[i]^ arr[i+1];
	}
	int pos= firstsetbit(n);
	int a=0,b=0;
	for(int i=0;i<n;i++){
		int num=arr[i];
		if((num>>pos)& 1){
			a  = a ^ arr[i];

		}
		else{
			b= b^ arr[i];
		}

	}

	cout<<a<<" "<<b;
	

}
*/



/* 

corect code given by TA
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],xr=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xr^=arr[i];
    }
    int ind=0;
    //Finding rightmost set bit
    while(!(xr&1)){
        xr>>=1;
        ind++;
    }
    int a=0,b=0;
    //Diving array into two parts
    for(int i=0;i<n;i++){
        int num=arr[i];
        if((num>>ind)&1)
            a^=arr[i];
        else
            b^=arr[i];
    }
    cout<<b<<" "<<a;
	return 0;
}


*/