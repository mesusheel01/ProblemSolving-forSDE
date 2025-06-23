#include <bits/stdc++.h>
using namespace std;

void recursiveInsertion(vector<int>&arr, int i, int n){
    if(i == n) return;

    int key = arr[i];
    int j = i;
    while(j >0 && arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    swap(arr[j], key);

    recursiveInsertion(arr, i+1, n);

}

int main() {
    int n;
    cout << "Enter n:";
    cin >> n;
    vector<int> arr;
    cout << "Enter the elements of array: " << endl;

    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    recursiveInsertion(arr,1,n);
    for(int i : arr){
        cout<< i << ' ';
    }
    return 0;
}
