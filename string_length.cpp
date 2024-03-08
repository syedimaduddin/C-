#include<iostream>
using namespace std;
int main()   //main function
 {
   char str[100];   //declaring string
   cout<<"enter the string:";
   cin>>str;
   int count = 0;
   /******* calcualting string length *******/
   while (str[count] != '\0')
   {
      count++;
   }
      cout <<"The length of the string is "<<count<<endl;
   /****** loop for the address of each character ******/
   for(int i=0;i<count;i++)
   {
       cout<<"the address of "<<str[i]<<" "<<"is"<<" "<<i+1<<endl;
   }
   return 0;
}

