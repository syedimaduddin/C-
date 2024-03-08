// In Priority Queue first element is maximum or minimum.
// Priority Queue is same as heap (max heap and min heap).
// In taking out elements from Priority Queue, there is only two ways, first one is to take out maximum value, and second one is to take out minimum value.

#include <iostream>
#include <queue>

using namespace std;
int main() {

  priority_queue <int> maxi;   // This is a max heap.

  priority_queue <int, vector<int> , greater<int> > mini;  // This is a min heap.

  maxi.push(153);
  maxi.push(735);
  maxi.push(436);
  maxi.push(553);
  int n = maxi.size();
  cout<<"Elements in maxi in Decreasing order: ";
  for(int i=0; i<n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }cout<<endl;

  mini.push(153);
  mini.push(735);
  mini.push(436);
  mini.push(553);
  int m = mini.size();
  cout<<"Elements in mini in Increasing order: ";
  for(int i=0; i<m; i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }cout<<endl;

  cout<<"maxi is empty or not: "<<maxi.empty()<<endl;
  cout<<"mini is empty or not: "<<mini.empty()<<endl;
}