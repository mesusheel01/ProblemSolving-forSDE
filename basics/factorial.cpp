#include<bits/stdc++.h>
using namespace std;

void printFact(int i,int fact){
  if(i == 1) cout<< fact;
  fact *=i;
  printFact(i-1,fact);

}

int main(){
  int n;
  cout << "Enter the number"<<endl;
  cin>> n;
  printFact(n,1);
  return 0;
}
