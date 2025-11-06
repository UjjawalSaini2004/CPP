#include<iostream>
using namespace std;
int main(){
 int n,p ;
 char op;
 cin>>n;
 cin>>op;
 cin>>p;
   switch(op){
    case '+':
    cout<<n+p;
    break;
    case '-':
    cout<<n-p;
        break;
    case '*':
    cout<<n*p;
        break;
    case '/':
    cout<<n/p;
        break;
    default:
    cout<<"invalid operator";
   } 
}