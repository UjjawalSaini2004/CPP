#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ld;
    int reverse = 0 ;
    while(n!=0){
        ld = n%10;
        reverse = reverse*10 ;
        reverse += ld;
        n =n/10;
    }
    cout<<reverse;

}