#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int f = 1;
    while(n!=1){
        f *= n;
        n--;
    }
 cout<<f;
}