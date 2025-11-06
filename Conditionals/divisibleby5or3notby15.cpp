#include<iostream>
using namespace std;
int main(){
 int n ;
 cout<<"Enter a number : "<<endl;
 cin>>n;
if((n%5==0 ||  n%3==0 ) && (n%15!=0)){
    cout<<"divisible my 5 0r 3 but not by 15 ";
}else{
    cout<<" not divisible my 5 0r 3 but not by 15";
}
}