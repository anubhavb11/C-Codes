#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;


class Car{
    public:
    string car_name;
    int x,y;
    Car(){

    }
    Car(string n,int x,int y){
        strcpy(car_name,n);
        x=x;
        y=y;
    }
    int dist(){
        return x*x + y*y;
    }

};

bool compare(Car A, Car B){
    int da= A.dist();
    int db= B.dist();

    if(da==db){
        return A.car_name.length() < B.car_name.length();
    }

    return da<db;
}

int main(){
    int n;
    cin>>n;
    vector<Car> v;

    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int x,y;
        cin>>x>>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    //for each loop
    for(auto c: v){
        cout<<"car "<<c.car_name<<"Dis "<<c.dist()<<c.x<<", "<<c.y<<endl;
    }
    return 0;
}
