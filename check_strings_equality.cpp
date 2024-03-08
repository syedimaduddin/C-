#include<iostream>
using namespace std;
int main()  //main function
{
    string str1,str2;    //declaring strings
    int i=0,check=0;   //declaring variables
    cout<<"Enter the First String: ";
        cin>>str1;
    cout<<"Enter the Second String: ";
        cin>>str2;
   /********* loop to compare two strings ***********/
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            check = 1;
            break;
        }
        i++;
    }
    /********** printing the result after comparison *************/
    if(check==0)
        cout<<"\nStrings are Equal";
    else
        cout<<"\nStrings are not Equal";
    cout<<endl;
    return 0;
}

