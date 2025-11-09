#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ld;
    int r = 0;
    int sum = n;
    while(n!=0){
        ld = n%10;
        r *= 10;
        r += ld;
        n /= 10;
    }

    cout<<r+sum;

}