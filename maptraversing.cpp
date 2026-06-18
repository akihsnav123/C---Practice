#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] ="Elephnat";
    m[2] = "is an";
    m[3] = "animal";

    for(auto it = m.begin(); it!= m.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}