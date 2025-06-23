#include<bits/stdc++.h>

using namespace std;

void selection(vector<int>&arr,int n){
    
    for(int i = 0 ; i < n-1;i++){
        int min = i;
        for(int j = i+1; j< n;j++){
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i)
            swap(arr[i],arr[min]);
    }
    for(auto i : arr) cout<< i << " ";
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
    selection(arr,n);
    return 0;
}