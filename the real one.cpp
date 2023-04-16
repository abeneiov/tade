
#include<iostream>
using namespace std;
int your_number , n1 , r1 ;
char  type , cal ;
void decimal(){ 
cout<<" to what do you want to change "<<endl;
cin>>cal;
cout<<" enter your your number "<<endl;
cin>>n1;
switch (cal){
case 'b':
  while (n1>0)
    {
     r1=n1%2;
     n1=n1/2;
    cout<<r1<<endl; }
    cout<<"binary";
    break;
case 'o':
  while (n1>0)
    {
     r1=n1%8;
     n1=n1/8;
     cout<<r1<<endl;}
    cout<<"octa";
    break;
case 'h':
  while (n1>0)
    {
     r1=n1%16;
     n1=n1/16;
     cout<<r1<<endl;}
    cout<<"hexa";
break;
default:
   cout<<"haha";
    break;
}

}

/*void binary(){
cout<<" to what do you want to change "<<endl;
cin>>cal;
cout<<" enter your your number "<<endl;
cin>>n1;
switch (cal){
case 'o':
  while (n1>0)
    {
     r1=n1%2;
     n1=n1/2;
    cout<<r1<<endl; }
    cout<<"binary";
    break;
case 'd':
  while (n1>0)
    {
     r1=n1%8;
     n1=n1/8;
     cout<<r1<<endl;}
    cout<<"octa";
    break;
case 'h':
  while (n1>0)
    {
     r1=n1%16;
     n1=n1/16;
     cout<<r1<<endl;}
    cout<<"hexa";
break;
default:
   cout<<"haha";
    break;
}
}*/
int main()
{ 
 
   decimal();
//   binary();

  return 0 ;
}
