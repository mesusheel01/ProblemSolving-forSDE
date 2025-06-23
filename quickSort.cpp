#include <bits/stdc++.h>
using namespace std;



    int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && nums[i] <= pivot) i++;
        while (i <= j && nums[j] >= pivot) j--;
        if (i < j) swap(nums[i], nums[j]);
    }

    swap(nums[low], nums[j]);
    return j;
}

void quickSort(vector<int>&arr,int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low,pivot-1);
        quickSort(arr,pivot+1, high);
    }
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

    quickSort(arr,0,n-1);
    for(int i : arr){
        cout<< i << ' ';
    }
    return 0;
}
