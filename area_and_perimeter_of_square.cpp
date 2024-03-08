// Area and Perimeter of square.

#include<iostream>
using namespace std;

int main()
{
    float s, area, perimeter;                                     // Here we take "s" as the Side of Square.
	                              
    cout<<"\n Side of Square : ";
    cin>> s;                                                 
    
    cout<<"\n";                                               // We make a gap between two lines for clear output
    
    area = s*s;                                              // Holds Formula of Area of Square
    
    perimeter = 4*s;                                         // Holds Formula of Perimeter of Square
    
    cout<<" Area of Square : "<<area<<endl;
    cout<<"\n";                                              // Again gap between two lines
    
    cout<<" Perimeter of Square : "<<perimeter<<endl;
    
    
    return 0;
 
}
