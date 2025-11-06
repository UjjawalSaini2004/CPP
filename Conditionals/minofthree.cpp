#include<iostream>
using namespace std;
int main(){
 int a,b,c;
 cout<<"Enter a : "<<endl;
 cin>>a;
 cout<<"Enter b : "<<endl;
 cin>>b;
 cout<<"Enter c : "<<endl;
 cin>>c;
if((a<b) && (a<c)){
    cout<<"a is least";
}else if(b<c){
    cout<<"b is least";
}else {
    cout<<"c is least";
}
}