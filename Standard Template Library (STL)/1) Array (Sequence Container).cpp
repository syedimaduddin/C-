#include <iostream>
#include <array>

using namespace std;
int main() {
 cout << "Hello World!\n";
 cout<<"hello imad"<<endl;
 array <int, 5> a;
 cout<<"Enter your array here : "<<endl;
 for(int i=0; i<5; i++)
 {
   cin>>a[i];
 }
 for(int i=0; i<5; i++)
 {
   cout<<a[i]<<" ";
 }
 cout<<endl;
 cout<<a.at(2)<<endl;
 cout<<"Empty or not: "<<a.empty()<<endl;
 cout<<"first element: "<<a.front()<<endl;
 cout<<"last element: "<<a.back()<<endl;
}