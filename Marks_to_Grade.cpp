#include<iostream>
using namespace std;
int main () //main function begins
{
int marks ;

cout<<"\n Enter Your Marks : ";
cin>>marks;

cout<<"\n Your Grade : ";
if(marks>= 90)
{
cout<<"A";
}
else if (marks>= 80 && marks< 90)
{
cout<<"B";
}
else if (marks>= 70 && marks< 80)
{
cout<<"C";
}
else if (marks>= 60 && marks<70)
{
cout<<"D";
}
else if (marks>= 50 && marks<60)
{
cout<<"E";
}
else if ( marks<50 && marks>40)
{
cout<<"F";
}
else
{
cout<<"Fail";
}
return 0 ;
}
