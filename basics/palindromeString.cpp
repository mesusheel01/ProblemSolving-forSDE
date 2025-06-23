#include<bits/stdc++.h>

using namespace std;
bool isPalindromeString(int i,int j,string s){
  if(i > j) return true;
  if(i ==j )return true;
  if(s[i]!=s[j]) return false;
  return isPalindromeString(i+1,j-1,s);
}
int main(){
  string n;
  cout<< "Enter n";
  cin>> n;
  cout<< isPalindromeString(0,n.length()-1,n);
}
