// We can enter our Address and get output.

#include<iostream>
using namespace std;

int main()
{
	char name[20],city[20],state[20];                            // Here we make limits for characters.
	int number,zipcode;
	
	cout<<"\n Enter your Street Number : ";                      // Holds Street Name.
	cin>>number;
	cout<<"\n";                                                  // Holds gap between two lines for clear output.
	cout<<" Enter your Street Name : ";
	cin>>name;
	cout<<"\n";
	
	cout<<" Enter your City Name : ";                            // Holds City Name.
	cin>>city;
	cout<<"\n";
	
	cout<<" Enter your State Name : ";                           // Holds State Name.
	cin>>state;
	cout<<"\n";
	
	cout<<" Enter your State Zip Code : ";                       // Holds State Zip Code.
	cin>>zipcode;
	cout<<"\n";
	
	// Here we make a line to separate output "Address".
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	cout<<"  Address : ";
	
	cout<<number<<","<<name<<","<<city<<","<<state<<","<<zipcode<<endl;
	
	return 0;
	
}
