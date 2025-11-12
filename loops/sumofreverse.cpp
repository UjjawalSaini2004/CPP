#include<iostream>
using namespace std;
int main (){ 
    int n;
    cin>>n;
    int ld;
    int sum = n;
    int reverse = 0 ;
    while(n!=0){
        ld = n%10;
         reverse = reverse*10;
         reverse +=ld;
         n = n/10;

        }
        cout<<reverse<<endl;
        cout<<"sum is "<<sum+reverse;
    }