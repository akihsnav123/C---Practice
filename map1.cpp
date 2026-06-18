#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] ="elephant";
    m[2] = "is an";
    m.insert({3, "animal"});

    for (auto x: m) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}