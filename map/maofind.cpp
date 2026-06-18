#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int, string> m= {{1, "elephant"}, {2, "is an"}, {3, "animal"}};

  auto it = m.find(2);
  if(it!= m.end()) {
    cout<<it->first<<" "<<it->second<<endl;
    } else {
        cout<<"Key not found"<<endl;
    }
  
    return 0;
}