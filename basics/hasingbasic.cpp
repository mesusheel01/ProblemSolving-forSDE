#include<bits/stdc++.h>

using namespace std;

// void maxMinFreqArr(vector<int>&arr, int n){
//   int max = INT_MIN;
//   for(int i = 0; i< n;i++){
//     if(max< arr[i]) max = arr[i];
//   }
//
//   vector<int>hashMap(max,0);
//   for(int i = 0 ;i < n; i++){
//     hashMap[arr[i]] += 1;
//   }
//   int minFreq = INT_MAX, maxFreq = INT_MIN;
//   for(int i = 0; i < max;i++){
//     if(hashMap[i]> maxFreq) maxFreq=  hashMap[i];:;
//     if(hashMap[i]< minFreq) minFreq = hashMap[i];
//   }
// }                                            o
void maxMinFreqArr(vector<int>&arr , int n){
  map<int,int> mp;
  for(int i = 0 ; i< n;i++){
    mp[arr[i]]++;
  }
  int minFreq = INT_MAX, maxFreq = INT_MIN;
  for(int i = 0 ;i < n;i++){
    if(mp[arr[i]] > maxFreq) maxFreq = mp[arr[i]];
    if(mp[arr[i]]< minFreq) minFreq = mp[arr[i]];
  }   cout<< "MinFrequency : "<< minFreq << ", MaxFrequency: " << maxFreq;
}
int main(){
  int n;
  cout << "Enter n";
  cin>> n;
  cout<<"Enter the element of array";
  vector<int>arr;
  for(int i = 0; i< n;i++){
    int ele;
    cin>> ele;
    arr.push_back(ele);
  }
   maxMinFreqArr(arr,n);
}
