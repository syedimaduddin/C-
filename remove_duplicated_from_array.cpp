// Remove duplicates from the Array.

#include<iostream>
using namespace std;

int main()
{
	int arr[50],n,i,j,x;                                                    // Define variables.
	
	cout << "\n Enter Array Length : ";
	cin >> n;                                                               // Take output from user.
	
	cout << "\n Enter Array Elements : " << ", ";	                            
	for(i=0; i<n; i++)                                                      // Make loop to input elements of array.
	{
		cin >> arr[i];
	}
	
	cout << "\n Original Array : ";
	for(i=0; i<n; i++)                                                       // Holds loop to show original array.
	{
		cout << arr[i] << ", ";
	}
	
	cout << "\n";                                                             // Hold gap for clear output.
	
	cout << "\n After Removing Duplicate Elements : ";
	for(i=0; i<n; i++)                                                        // Holds loop to remove duplicates.
	{
		for(j=i+1; j<n; )
		{
			if(arr[i] == arr[j])
			{
				for(x=j; x<n; x++)
				{
					arr[x] = arr[x+1];
				}
				n--;
			}
			else
			{
				j++;
			}
		}	
	}
	
	for(i=0; i<n; i++)                                                         // loop to show output to user. 
	{
	    cout << arr[i] << ", ";                                                // Holds output.
    }
    
    cout << "\n";
    
	return 0;
}
