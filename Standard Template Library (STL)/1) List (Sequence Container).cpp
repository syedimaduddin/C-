#include <iostream>
#include <list>
#include <bits/stdc++.h>

using namespace std;

int main() {
  list <int> l;

  list <int> n(l);    // Copy list 'l' to new list 'n'

  list <int> a(5, 100);   // list 'a' having 5 elements and all elements initialised with 100

  l.push_back(1);
  l.push_back(2);
  

  cout<<"Size of list before erase: "<<l.size()<<endl;
  cout<<"Elements of list before erase: ";
  for(int i:l)
  {
    cout<<i<<" ";
  }cout<<endl;

  l.erase(l.begin());

  cout<<"Size of list after erase: "<<l.size()<<endl;
  cout<<"Elements of list before erase: ";
  for(int i:l)
  {
    cout<<i<<" ";
  }cout<<endl;

  // l.push_back(10);
  // l.pop_back();
  // l.push_front(20);
  // l.pop_front();
}