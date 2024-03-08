// To find the Sum of all Elements of a double array.

#include<iostream>                                                                  
using namespace std;

int main()
{
	int n,i;                                                                                           // Define variables.

	double arr[10], sum=0;
	
	cout << "\n To Find the Sum of all elements of a double array :"<<endl;
	
	cout << "\n Enter the Size of the Array : ";
	cin >> n;                                                                                        // Take size of array from user.
	
	cout << "\n Enter elements of the Array : "<<endl;
	
	for (i=0; i<n; i++)                                                                              // I make condition for program.
	   {
	   	cin >> arr[i];
	   }
	 
	for (i=0; i<n; i++)
	   {
	   	sum = sum + arr[i];
		}   

	    
    cout << "\n Sum of all Elements : "<<sum<<endl;                                                     // Get output as a sum of elements of double array.                     

	return 0;
}
