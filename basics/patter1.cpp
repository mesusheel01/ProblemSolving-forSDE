#include<bits/stdc++.h>

using namespace std;

// void alphaHill(int n) {
//     // Write your code here.
//     char c = 'A';
//     for(int i = 0; i< n;i++){
//         c = 'A';
//         for(int k = 0; k< 2*(n-i-1); k++){
//             cout<< " ";
//         }
//         for(int j = n-i-1; j< n;j++){
//             cout<< c<< " " ;
//             c ++;
//         }
//
//         for(int m = n-i; m< n;m++){
//             if(i == 1) cout<< "A ";
//             else{
//                 cout<< c << " ";
//             }
//             c--;
//         }
//         cout<< endl;
//     }
// }; 
void alphaTriangle(int n) {
    // Write your code here.
    char c;
    for(int i = 0; i< n;i++){
        c= 'A'+n-1;
        for(int j = n-i-1; j< n;j++)
            cout<< c<< " ";
            c--;
        cout<< endl;
    }

}
void pattern(int n){
  for(int i = 0; i< n;i++){
          // star
          for(int j = i; j< n;j++){
              cout<< "* ";
          }
          //space
          for (int k = 0; k< 4*i;k++){
              cout<< " ";
          }
          //star
          for(int m = i; m<n;m++){
              cout<< "* ";
          }
          cout<< endl;
      }
  for(int i = 0; i< n;i++){
        // star
        for(int j = n-i-1; j< n;j++){
            cout<< "* ";
        }
        //space
        for (int k = 0; k< 4*(n-i-1);k++){
            cout<< " ";
        }
        //star
        for(int m = n-i-1; m<n;m++){
            cout<< "* ";
        }
        cout<< endl;
    }
}
void symmetry(int n) {
    // Write your code here.
    for(int i = 0; i< n;i++){
        for(int j = n-i-1; j< n;j++){
            cout<< "* ";
        }
        for(int k = 0; k< 4*(n-i-1); k++){
            cout<< " ";
        }
        for(int m = n-i-1; m < n; m++){
            cout<< "* ";
        }
        cout<< endl;
    }for(int i = 0; i< n;i++){
        for(int j = i; j< n-1;j++){
            cout<< "* ";
        }
        for(int k = 0; k< 4*(i+1); k++){
            cout<< " ";
        }
        for(int m = i; m < n-1; m++){
            cout<< "* ";
        }
        cout<< endl;
    }
}
int mirror(int n){
     for(int i = 0 ; i< n; i++){
        for(int j = 0; j< n;j++){
            if(i == 0 || i == n) cout<< "* ";
            else if(i > 0 || i< n && j == 0 || j == n-1) cout<< "* ";
        }
    }
}
int main(){
  int n;
  cout<< "Enter n"<<endl;
  cin>> n;
  // alphaHill(n);
//   alphaTriangle(n);
//   pattern(n);
//   symmetry(n);r
    mirror(n);
  return 0;
}
