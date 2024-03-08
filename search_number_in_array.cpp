// Searching element of an array using Binary Search (without recusion).

#include<iostream>
using namespace std;

int main()
{
	int i,n;                                                         // Holds variables.                                             
	int arr[n];
	int element;
	int foundAt;
	bool flag = false;                                               // Take boolean for false output.
	
	cout << "\n Enter No. of elements of Array : ";
	cin >> n;                                                        // Take No. of elements from user.
	
	for (i=0; i<n; i++)
	   {
	   	cout << "\n Enter Element : "<<i+1<<endl;
	   	cin >> arr[i];                                                // Take elements from user.
	   }
	   
	cout << "\n Enter element you want to search : ";         
	cin >> element;                                                   // Take element which user want to search.
	
	for(i=0; i<n; i++)                                                // Loop for both contidions.
	   {
	   	    if(element == arr[i])
	   	    {
	   	    	flag = true;
	   	    	foundAt = i+1;
	   	    	break;
			   }
			else
			     continue;   
		}
	
	if (flag == true)                                                  // Loop if elements is found.
	    {
	    	cout << "\n";
	    	cout << element << " is found at the place of Element-"<< foundAt <<endl;
		}
	else
	    {
	    	cout << "\n  - Not found " << endl;                        // Loop if element is not found.
		}
			  		   
    return 0;
}
