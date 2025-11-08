#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : "; 
    cin>>n;
    int ld ;
    int sum = 0;
    while(n!=0){
        ld = n%10;
        sum *= ld;
        n = n/10;
    }
    cout<<"Total sum of digits are : "<<sum;
    }