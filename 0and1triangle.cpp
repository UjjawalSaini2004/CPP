#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
     for(int i =1;i<=n;i++){   // rows
        for(int j =1;j<=i;j++){  // columns
            if((i+j)%2==0){
                cout<<1;
            }else{
                cout<<0;
            }
       }
       cout<<endl;
    
    }
    }