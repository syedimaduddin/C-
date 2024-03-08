// Change the value of Sale Amount to get new value of Total Amount Due 

#include<iostream>
using namespace std;

int main()
{
	float Sale,Tax,Total;                                               // Here we clarify that all our output values are Real.
	
		
	cout << "\n Enter Your Sale Amount : ";                        
    cin >> Sale;
	cout << "\n";                                                       // Here we put any value of Sale Amount.
    
    Tax = 0.09*Sale;                                                   // Holds Formula for Tax Amount ( Tax = 9% of Sale).
    cout << "\n Tax Amount : "<<Tax<<endl;
    cout << "\n";
    
    Total = Sale + Tax;                                              // Holds Formula for Total Amount.
	cout << " Total Amount : "<<Total<<endl;
	
	return 0;        
}
