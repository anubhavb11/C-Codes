// //HAckerblocks -- Sort the strings
// #include<iostream>
// #include<cstring>
// #include<string>
// #include<algorithm>
// using namespace std;

// string extractStringAtKey(string str,int key){
//     char *s= strtok((char *)str.c_str()," ");
//     while(key>1){
//         s= strtok(NULL," ");
//         key--;
//     }
//     return (string)s;
// }
// int convertToInt(string s){
//     int ans=0;
//     int p=1;
//     for(int i=s.length()-1; i>=0;i--){
//         ans == ((s[i]-'\0')*p);
//         p=p*10;
//     }
//     return ans;
// }


// bool numericCompare(pair<string,string> s1,pair<string,string> s2 ){
//     string key1,key2;
//     key1 = s1.second;
//     key2 = s2.second;

//     return convertToInt(key1) < convertToInt(key2);
// }

// bool lexicoCompare(pair<string,string> s1,pair<string,string> s2 ){
//     string key1,key2;
//     key1 = s1.second;
//     key2 = s2.second;

//     return key1<key2;

// }


// int main(){

//     int n;
//     cin>>n;
//     cin.get();

//     string a[100];
//     for(int i=0; i<n ; i++){
//         getline(cin,a[i]);
//     }

//     int key;
//     string reversal , ordering ;
//     cin>>key>>reversal>>ordering;

//     pair<string,string> strPair[100];

//     for(int i=0; i<n;i++){
//         strPair[i].first=a[i];
//         strPair[i].second= extractStringAtKey(a[i],key);
//     }

//     // Sorting 

//     if(ordering == "Numeric"){
//         sort(strPair,strPair,numericCompare);
//     }

//     else{
//         sort(strPair, strPair +n , lexicoCompare);
//     }

//     if(reversal == " true"){
//         for(int i=0; i<n/2 ;i++){
//             swap(strPair[i], strPair[n-1-i]);
//         }
//     }
//     for(int i=0;i<n; i++){
//         cout<< strPair[i].first<<endl;
//     }
    

// }




//HAckerblocks -- Sort the strings
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str,int key){
    char *s= strtok((char *)str.c_str()," ");
    while(key>1){
        s= strtok(NULL," ");
        key--;
    }
    return string(s);
}
int convertToInt(string s){
    int ans=0;
    int p=1;
    for(int i=s.length()-1; i>=0;i--){
        ans = ans + ((s[i]-'0')*p);  // You did not add to ans // You used '\0' instead of 0 // You did ans == instead of ans =
        p=p*10;
    }
    return ans;
}


bool numericCompare(pair<string,string> s1,pair<string,string> s2 ){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;

    // cout<<convertToInt(key1)<<" "<<convertToInt(key2)<<'\n';
    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string,string> s1,pair<string,string> s2 ){
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1<key2;

}


int main(){

    int n;
    cin>>n;
    cin.get();

    string a[100];
    for(int i=0; i<n ; i++){
        getline(cin,a[i]);
    }

    int key;
    string reversal , ordering ;
    cin>>key>>reversal>>ordering;

    pair<string,string> strPair[100];

    for(int i=0; i<n;i++){
        strPair[i].first=a[i];
        strPair[i].second= extractStringAtKey(a[i],key);
        // cout<<strPair[i].second<<'\n';
    }

    // Sorting 

    if(ordering == "numeric"){ // Small n not capital
        sort(strPair,strPair +n,numericCompare);
    }

    else{
        sort(strPair, strPair +n , lexicoCompare);
    }

    if(reversal == "true"){ // You did " true" instead of "true"
        for(int i=0; i<n/2 ;i++){
            swap(strPair[i], strPair[n-1-i]);
        }
    }

    for(int i=0;i<n; i++){
        cout<< strPair[i].first<<endl;
    }
}