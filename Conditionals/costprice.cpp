#include<iostream>
using namespace std;
int main(){
    int sell,buy ;
    cout<<"Enter selling price :"<<endl;
    cin>>sell;
    cout<<"Enter buying price"<<endl;
    cin>>buy;
    if(sell-buy>0){
        cout<<"Profit is : "<<sell-buy<<endl;
    }else if(sell-buy==0){
        cout<<"NO profit NO loss";
    }else{
        cout<<"loss is : "<<sell-buy<<endl;
    }
   
}