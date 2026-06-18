#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, string> m= {{1,"elephant"}, {2, "is an"}, {3,"animal"}};
    m[1] = "sparrow";
    m[3] = "bird";

    cout<<m[1]<<" "<<m[2]<<" "<<m[3]<<endl;
    return 0;
    
} 