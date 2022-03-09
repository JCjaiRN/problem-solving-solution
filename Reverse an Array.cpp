#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  vector<int>ar(n);
  for(int ar_i=0; ar_i<n; ar_i++){
      cin>> ar[ar_i];
  } 
  
  for(int ar_i=n-1;ar_i>=0;ar_i--){
      cout<< ar[ar_i] << " ";
      
  }
  cout<<endl;
  return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
