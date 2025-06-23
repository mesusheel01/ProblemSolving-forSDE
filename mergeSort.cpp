#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int>res;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) {
            res.push_back(arr[left]);
            left++;
        }
        else{
         res.push_back(arr[right]);
        right++;
        }
    }
    // if right is done but left array is left with elements;
    while(left<=mid){
        res.push_back(arr[left]);
        left++;
    }
    //if left is done but right is left
    while(right<=high){
        res.push_back(arr[right]);
        right++;
    }
    cout << "Sorted elements are : ";
    for(int i: res) cout<< i << " ";
}

void mergeSort(vector<int>&arr, int low, int high){
    if(low < high){
        int mid = (low+high) >> 1;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid + 1, high);
        merge(arr,low,mid,high);
    }
}

int main(){
    int n;
    cout<< "Enter n:";
    cin>> n;
    vector<int> arr;
    cout<<"Enter the elements of array: "<<endl;

    for(int i = 0; i< n;i++){
        int ele;
        cin>> ele;
        arr.push_back(ele);
    }
    mergeSort(arr,0,n-1);
    return 0;
}



