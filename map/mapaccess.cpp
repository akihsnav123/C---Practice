#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m= {{1, "elephant"}, {2, "is an"}, {3, "animal"}};

    cout<<m[1]<<endl;
    cout<<m.at(2)<<endl;

    return 0;
}