// Program to reverse an integer taken by user.

#include<iostream>
using namespace std;

int main()
{
    int n = 0;                                                            // Define variables
    int digit = 0;                                                        //  n = integer taken by user
    int r = 0;                                                            //  r = reverse of given integer
                                                                          
                                                                          
    cout<<"Program to reverse an integer number\n\n";
    cout<<"Enter an integer number: ";
    cin>>n;                                                                // Take ineger from user.

    while (n != 0)                                                         // Put a while loop.
    {
        digit = n % 10;
        n = n / 10;
        r = r*10 + digit;
    }

    cout<<"\n Reverse of above integer: "<<r<<endl;                         // Get reversed output.
    
    return 0;
}
