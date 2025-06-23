#include <bits/stdc++.h>
using namespace std;

void recursiveBubb(vector<int>& arr, int n){
    if ( n == 1) return;

    for(int i = 0; i< n-1; i++){
        if(arr[i]> arr[i+1]) swap(arr[i], arr[i+1]);
    }
    recursiveBubb(arr,n-1);
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

    recursiveBubb(arr,n);
    for(int i : arr){
        cout<< i << ' ';
    }
    return 0;
}
