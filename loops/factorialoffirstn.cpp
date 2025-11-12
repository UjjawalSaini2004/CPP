#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int F = 1;
    for(int i = 1 ;i<=n;i++){
        F *= i;
        cout<<"Factorial of "<<i<<" is "<<F<<endl;
    }
   
    }