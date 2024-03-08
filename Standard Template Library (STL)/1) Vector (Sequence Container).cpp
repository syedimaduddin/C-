#include <iostream>
#include<vector>
using namespace std;

int main() {

  vector<int> v(5,1);    //Here we make a vector of size 5 in which all elements are initialized with one.

  vector<int> b(v);   // This vector copy all values of vector v.
  
  vector <int> a;
  cout<<"Capacity: "<<a.capacity()<<endl;

  a.push_back(1);    // we use this function to add 1 in my array.
  cout<<"Capacity: "<<a.capacity()<<endl;

  a.push_back(2);
  cout<<"Capacity: "<<a.capacity()<<endl;

  a.push_back(3);   // Here capacity becomes 4. because if we try to add 3 objects in array size 2 then vector create a new array having double the size of previous(which is 2 in our case).
  cout<<"Capacity: "<<a.capacity()<<endl;

  cout<<"No of elements in our vector array: "<<a.size()<<endl;

  cout<<"The elements of vector are: ";
  for(int i:a)    // here we give values of a to i;
  {
    cout<<i<<" ";
  }
  cout<<endl;

  a.push_back(10);
  cout<<"Second element: "<<a.at(1)<<endl;
  cout<<"First element: "<<a.front()<<endl;
  cout<<"Last element: "<<a.back()<<endl;

  a.pop_back();       // This function is used to delete last element from vector.
  cout<<"Remaining elements after pop out last element: ";
  for(int i:a)    // in vector we can use this
  {
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"Size before clear vector: "<<a.size()<<endl;
  cout<<"Capacity before clear vector: "<<a.capacity()<<endl;
  a.clear();
  cout<<"Size after clear vector: "<<a.size()<<endl; 
  cout<<"Capacity after clear vector: "<<a.capacity()<<endl;

}