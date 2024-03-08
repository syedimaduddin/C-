// In map, we got the output in sorted form.
// If we use "unordered map" then the output is random.

#include <iostream>
#include <map>
using namespace std;

int main() {
  map <int,string> m;

  m[1] = "Syed";   // m[key] = value;
  m[2] = "Imad";
  m[13] = "Uddin";

  m.insert({5,"sinwan"});   // this is another method to insert values and key to map m.

  cout<<"Before erase : "<<endl;
  for(auto i:m)
  {
    cout<<i.first<<" -> "<<i.second<<endl;    // first is for "keys" and second is for "values".
  }cout<<endl;

  cout<<"Finding 13 -> "<<m.count(13)<<endl;  // if 13 is in map 'm' then it gives 1 if it is not in 'm' then it gives 0
  cout<<endl;
  m.erase(13);

  cout<<"After erase key-13"<<endl;
  for(auto i:m)
  {
    cout<<i.first<<" -> "<<i.second<<endl;    // first is for "keys" and second is for "values".
  }cout<<endl;

  auto it=m.find(2);
  cout<<"Keys and values after key-2: "<<endl;
  for(auto i = it; i!=m.end(); i++){
    cout<<(*i).first<<" -> "<<(*i).second<<endl;
  }cout<<endl;
}