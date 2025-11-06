 #include<iostream>
using namespace std;
int main(){
int l,b;
cout<<"Length is : ";
cin>>l;
cout<<"bredth is : ";
cin>>b;
int area = l*b;
int parameter = 2*(l+b);
if(area > parameter){
    cout<<"Area is bigger"<<endl;
}else{
    cout<<"Parameter is bigger";
}
}