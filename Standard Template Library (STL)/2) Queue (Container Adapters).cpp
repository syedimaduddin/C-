// First in first out is the concept for Queue.

#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue <string> q;

  q.push("Syed");
  q.push("Imad");
  q.push("Uddin");

  cout<<"First Element: "<<q.front()<<endl;
  cout<<"Size of Queue: "<<q.size()<<endl;
  
  q.pop();    // this will remove first element of queue.

  cout<<"First Element after pop one element: "<<q.front()<<endl;
  cout<<"Size of Queue: "<<q.size()<<endl;

  q.pop();

  cout<<"First Element after pop two elements: "<<q.front()<<endl;
  cout<<"Size of Queue: "<<q.size()<<endl;
}