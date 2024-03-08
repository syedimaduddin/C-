#include <iostream>
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
 
int main () //main function
{ 
    /***** declaring variables, string and pointer *****/
    char text [MAX_SIZE];
    char * str = text;
    int count = 0;
    // Inputtin string from user
    cout<<"Enter any string: ";
    cin>>text;
    // iterating though last element of the string
    while(*(str++) != '\0') count++;
        cout<<"Length of "<<text<<" is "<<count;  //printing the length of the string through pointer
    return 0;
}

