// In stack last element is shown first and first shown on last.
// Stack is similar to that if we put books a table then first book is at last and last one is at top.

#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack <string> s;

  s.push("Syed");
  s.push("Imad");
  s.push("Uddin");

  cout<<"Top element in stack is: "<<s.top()<<endl;
  cout<<"Size of stack: "<<s.size()<<endl;

  s.pop();   // this delete top element of stack.

  cout<<"Top element in stack is: "<<s.top()<<endl;
  cout<<"Size of stack: "<<s.size()<<endl;

  cout<<"Empty or not: "<<s.empty()<<endl;

}