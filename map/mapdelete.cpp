#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] ="elephant";
    m[2] = "is an"; 
    m[3] = "animal";
    m.erase(2);
    m.erase(m.begin());

    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}