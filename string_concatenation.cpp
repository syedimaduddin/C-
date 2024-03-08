#include <iostream>
using namespace std;
int main()  //main function
{
   char string1[100],string2[100];   //declaring strings
   cout<<"enter string 1:";
  	 cin>>string1;
   cout<<"enter string 2:";
    	cin>>string2;
   int i,j;  //declaring variables
   cout<<"String 1: "<<string1<<endl;
   cout<<"String 2: "<<string2<<endl;
   for(i = 0; string1[i] != '\0'; ++i);
   j=0;
  /******* concatenation of strings ********/
   while(string2[j] != '\0') 
   {
      string1[i] = string2[j];
      i++;
      j++;
   }
   string1[i] = '\0';
   cout<<"String after concatenation: "<<string1;   //printing the string after concatenation
   return 0;
}

