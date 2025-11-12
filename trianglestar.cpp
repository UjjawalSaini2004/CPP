#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
     for(int i =1;i<=n;i++){   // rows
        for(int j =1;j<=i;j++){  // columns
            cout<<"*";
            // cout<<i; for same number
            // cout<<j; for number
            //       cout<<(char)(j+64); for alphabet
       }
       cout<<endl;
    
    }
    }
     