#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>&arr, int n){
    for(int i = 0 ;i< n-1;i++){
        for(int j = 0; j < n-i-1;j++){
            if(arr[j]> arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    for(int i : arr)cout<< i<< ' ';
}

int main() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    vector<int> arr;
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    bubbleSort(arr,n)   ;
    return 0;
}