// we can use algorithm library for binary search.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  vector <int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout<<"Our vector is -> ";
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl<<endl;

  cout<<"Finding 6 -> "<<binary_search(v.begin(), v.end(), 6)<<endl;
  cout<<"Lower Bound of 5 -> "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;
  // lower_bound(v.begin(), v.end(), 5)  <- this is an iterator.

  cout<<"Upper Bound of 5 -> "<<upper_bound(v.begin(), v.end(), 5) - v.begin()<<endl<<endl;

  int a = 15;
  int b = 35;
  cout<<"a="<<a<<", "<<"b="<<b<<endl;
  cout<<"Max of a and b -> "<<max(a,b)<<endl;
  cout<<"Min of a and b -> "<<min(a,b)<<endl;
  swap(a,b);
  cout<<"After swap values -> "<<"a="<<a<<", "<<"b="<<b<<endl<<endl;

  string name = "imad";
  reverse(name.begin(), name.end());
  cout<<"Reverse of 'imad' -> "<<name<<endl<<endl;

  rotate(v.begin(), v.begin()+2, v.end());  // here we make first 2 elements of vector at last in clockwise motion.
  cout<<"After rotate: ";
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl;

  sort(v.begin(),v.end());   // this sort function is "introsort" which is made up of three sort functions quick_sort, heap_sort and insertion_sort.
  cout<<"Again sorted vector is -> ";
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl; 

}
