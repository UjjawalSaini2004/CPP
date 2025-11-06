#include<iostream>
using namespace std;
int main(){
 int n ;
 cout<<"Enter a number : "<<endl;  
 cin>>n;
 bool flag = true;  // true means prime;
for(int i=2;i>1;i--){
    if(n%i==0) {
       flag = false;  // flase means composite
        break;
    }
    }
    if(n==1) cout<<"Neither prime nor composite";
 else if(flag == false){ 
    cout<<"Composite";
  }else{
    cout<<"Prime";
  }
}