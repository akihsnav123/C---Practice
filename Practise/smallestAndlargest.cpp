/* Find the smallest and largest elements in an array */
#include<iostream>
#include<vector>
using namespace std;

pair<int, int>ans(const vector<int>& arr) {
    if(arr.empty()) {
        return{0, 0};
    }
    int max_val = arr[0];
    int min_val = arr[0];

    for(int i=0; i< arr.size(); i++) {
        if(arr[i] > max_val) {
            max_val = arr[i];
        }
        if(arr.size() < min_val) {
            min_val = arr[i];
        }
    }
    return{max_val, min_val};
}
int main() {
    vector<int> ex1 = {3, 1, 7, 9, 2, 8};
    auto result1 = ans(ex1);
    cout << "Largest: " << result1.first << ", Smallest: " << result1.second << endl;
}
