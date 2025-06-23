#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>&arr, int n){
    for(int i = 1 ; i< n;i++){
        int key = arr[i];
        int j = i-1;
    
        while(j>= 0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i  : arr) cout<< i << ' ';
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
    insertionSort(arr,n)   ;
    return 0;
}