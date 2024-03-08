// Program to check whether a no. is Palindrome or not.

#include<iostream>
using namespace std;

int main()
{
    int n = 0;                                                          // Define variable.
    int digit = 0;                                                      // n = integer taken by user.
    int r = 0;                                                          // r = reversed of given integer.
    
    
    cout<<"Program to check whether a Number is Palindrome or not\n\n";
    cout<<"Enter an integer number: ";                                        
    cin>>n;                                                              // Take integer from user.
    cout<<endl;
 
    int num = n;                                                         // Storing value of "n" into "num".
    
    while (num != 0)                                                       //  Holds while loop.
    {
        digit = num % 10;
        num /= 10;
        r = r*10 + digit;
    }
    
    
    if (n == r)                                                           // Condition loop for palindrome no.
    {
        cout<<n<<" is a Palindrome"<<endl;                                // Get output a palindrome.
    }
    else
    {
        cout<<n<<" is not a Palindrome"<<endl;                            // Get output as not palindrome.
    }
    
    return 0;
}
