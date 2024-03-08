// To Find minimum and maximum elements of an array.

#include<iostream>                                                                         // Preprocessor Directive.
using namespace std;

int main()
{
	int arr[10],i,n,max,min;                                                              // Define all variables.
	
	cout << "\n To Find Maximum and Minimum elements of an Array : "<<endl;
	
	cout << "\n Enter the size of Array : ";
	cin >> n;                                                                             // Take Size of Array from user.
	
	cout << "\n Enter the Elements of Array : "<< endl;                                    // Take Elements of Array from user.
	{
		for (i=0;i<n;i++)
		cin >> arr[i];
	}	
	
	cout << "\n The Elements of Array are : ";                                             // Holds Elements type by user.
	
	for (i=0;i<n;++i)
	{
		cout << arr[i]<<", ";
	}
    
	max = arr[0];
	for(i=0;i<n;i++)
	{
		if (max < arr[i])
		max = arr[i];
	}	
    
    min = arr[0];
    for (i=0;i<n;i++)
    {
    	if (min > arr[i])
    	min = arr[i];
	}
	
	cout << "\n";                                                                            // Leave line for clear output.
	
	cout << "\n Largest Element : "<<max<<endl;                                              // Get largest element of the array.
	
	cout << "\n Smallest Element : "<<min<<endl;                                             // Get smallest element of the array.
			  
	cout << "\n";                                                                            // Leave line for clear output.
	
	return 0;
}
