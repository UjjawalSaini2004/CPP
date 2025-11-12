#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter the number";
    cin>>n;
    int F = 1;
    for(int i =n;i>=1;i--){
        F *= i;
        
    }
    cout<<"Factorial of n is : "<<F;
    }