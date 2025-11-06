#include<iostream>
using namespace std;
int main(){
 int x,y;
 cout<<"Enter x : "<<endl;
 cin>>x;
 cout<<"Enter y : "<<endl;
 cin>>y;
    if(x>0 && y>0){
        cout<<"1st Quadrant";
    }
        else if(x<0 && y>0){
            cout<<"2nd quadrant";
        }
        else if(x<0 && y<0){
            cout<<"3rd Quadrant";
        }
        else if(x>0 && y<0){
            cout<<"4th Quadrant";
        }
        else {
            cout<<"at origin";
        }
}