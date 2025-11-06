// #include<iostream>
// using namespace std;
// int main(){
//  int n ;
//  cout<<"Enter a number : "<<endl;
//  cin>>n;
// for(int i=4;i<=3*n+1;i+=3){
//     cout<<i<<" ";
// }
// }



// METHOD 2

#include<iostream>
using namespace std;
int main(){
 int n ;
 cout<<"Enter a number : "<<endl;
 cin>>n;
 int a = 4;
for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a+=3;
}
}
