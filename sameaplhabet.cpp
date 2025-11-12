#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    int col  = 1;
     for(int i = 1;i<=n;i++){   // rows
        for(int j = 1;j<=n;j++){  // columns
                  cout<<(char)(col+64);
       }
       cout<<endl;
       col++;
    
    }
    }
     