// To find the sum of : 1 - 1/2^2 + 1/3^3 - 1/4^4 _ _ _ _ _ - (-1)^n/n^n.

#include<iostream>
#include<cmath>                                                     // Here, include cmath due to power function.
using namespace std;

int main()
{
	double p,sum=1;                                                // Holds variable 'p' for power function.
	int n,sign;                                  
	
	cout << "\n Series : 1 - 1/2^2 + 1/3^3 - 1/4^4 _ _ _ _ _ _ - (-1)^n/n^n." << endl;
		
	cout << "\n Enter the value of n : ";
	cin >> n;                                                      // Here we take value from user.
	
	for (int i; i<=n; i++)
	
	{
		if(i%2 == 0)                                              // Codition for signs in the series.
		{
	       sign = -1;
	    }
	    else
	    {
	    	sign = 1;
		}
		
		p = pow(i,i);                                             // Here the pow means the power function.
		
		sum = sum + sign*(1/p);                                   // Holds formula for sum of series.
		
    }
    
	cout << "\n Answer of the Series : " << sum << endl;         // Holds output.
	
	return 0;
}
