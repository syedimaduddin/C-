// Set has only unique elements.
// No modification in Set, only we can delete or add element to a Set.
// Set always give output in a sorted array.
// Set is slower than Unordered Set, because in set output is sorted but in unordered set output is random.

#include <iostream>
#include <set>

using namespace std;
int main() {
  set <int> s;
  
  s.insert(1);     // Complexity of insert is O(logn).
  s.insert(1);
  s.insert(3);
  s.insert(3);
  s.insert(2);
  s.insert(5);
  s.insert(4);
  s.insert(4);

  cout<<"Set output is: ";
  for(int i:s)
  {
    cout<<i<<" ";
  }cout<<endl;

  s.erase(s.begin());   // this will delete first element of set.

  cout<<"Set after erase first element is: ";
  for(int i:s)
  {
    cout<<i<<" ";
  }cout<<endl;

  // if we want to erase our set elements from their index no then we use iterator.
  set <int> :: iterator it = s.begin();  // Here we initiate it as an iterator.
  it++;  // here we increment it two time to make it 2;
  s.erase(it);  // here we delete set element of index 2.

  cout<<"Set after erase element on index-1: ";
  for(int i:s)
  {
    cout<<i<<" ";
  }cout<<endl;

  // we can find an element in set by using "count"
  cout<<"4 is present in set or not: "<<s.count(4)<<endl;

  // If we find an element in the set and print element and elements after that element.
  set <int> :: iterator itr = s.find(2);
  cout<<"Elements 2 and after 2 in our set: ";
  for(auto it=itr; it!=s.end(); it++)
  {
    cout<<*it<<" ";
  }cout<<endl;  
}