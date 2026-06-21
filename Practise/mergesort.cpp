#include<iostream>
#include<vector>
using namespace std;
 void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int i = low, j=mid+1;
    while(i<=mid && j<=high) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i =low, j=0; i<=high; i++, j++) {
        arr[i] = temp[j];
    }
}
void mergeSort(vector<int>& arr, int low, int high) {
    if(low==high) //single element
        return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main() {
    vector<int> arr={ 5, 7, 9, 3, 1, 2, 4, 8};
    mergeSort(arr, 0, arr.size()-1);
    //output
    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}

     