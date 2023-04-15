#include<iostream>
using namespace std;

void desim()
{
   int your_number ,bi , r1  ,n1 , type ;
   cout<<"to what number type to you want to change the decimal \n for binary write bi \n for octa write oc \n for hexa write he "<<endl;
   cin>>type;
   cout<<"enter your number"<<endl;
   cin>>your_number;
   if(type == bi ){
   n1=your_number;
    while(n1<0){
     r1=n1%2;
     n1=n1/2;
     cout<<r1<<endl;}
     }
   else 
    {
    while(n1<0)
    r1=n1%8;
    n1=n1/8;
    cout<<r1<<endl;
    }   
}






int main(){
  cout<<"what is your number type : "<<endl;
  desim();
  
  
return 0;
}
