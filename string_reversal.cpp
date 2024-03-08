#include<iostream>
using namespace std;
int main () //main function starts
{
    char str[100], temp;  /*declring variables and strings*/
    int size=0,i=0;
    cout<<"Enter a string:";
    cin>>str;
    while (str[size] != '\0')   //loop to calculate the length of the string
    {
        size++;
    }
    size = size - 1;
    while (i < size)   //loop to reverse the string
    {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
        i++;
    }
    cout << "After reverse string:" << str;  //printing the reversed string
    return 0;
}

