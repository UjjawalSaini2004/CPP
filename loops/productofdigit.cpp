#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : "; 
    cin>>n;
    int ld ;
    int product = 1 ;
    while(n!=0){
        ld = n%10;
        product *= ld;
        n = n/10;
    }
    cout<<"Total product of digits are : "<<product;
    }