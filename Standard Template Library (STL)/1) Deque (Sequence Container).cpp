// deque is used if we want to perform acitons at last and begin of an arrray at a same time.

#include <iostream>
#include <deque>

using namespace std;

int main() {
  deque <int> d;

  d.push_back(1);
  d.push_front(2);
  for(int i:d)
  {
    cout<<i<<" ";
  }cout<<endl;

  // d.pop_back();   
  // d.pop_front();
  
  cout<<"Element at index 1 is: "<<d.at(1)<<endl;
  cout<<"First element: "<<d.front()<<endl;
  cout<<"Last element: "<<d.back()<<endl;
  cout<<"Empty or not: "<<d.empty()<<endl;

  cout<<"Size of deque before erase: "<<d.size()<<endl;
  d.erase(d.begin(), d.begin()+1);  // Here we delete first element of deque.
  cout<<"Size of deque after erase: "<<d.size()<<endl;
  cout<<"Elements in deque after erase: ";
  for(int i:d)
  {
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Maximum size of deque allocated to us: "<<d.max_size()<<endl;
}