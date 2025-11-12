#include<iostream>
using namespace std;
int main (){ 
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    int num = 1;
     for(int i =1;i<=n;i++){    // rows
        for(int j =1;j<=i;j++){  // columns
            cout<<num++;
            
        }
       cout<<endl;
    
    }
    }