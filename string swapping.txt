#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  
  string a,b,c;
  char aa,bb;
  int alen1,blen1;
  
  cin>>a>>b;
  
  alen1=a.size();
  blen1=b.size();
  
  cout<<alen1<<" "<<blen1<<endl;
  
  c=a+b;
  cout<<c;
  
  
  aa=b[0];
  bb=a[0];
  a[0]=aa;
  b[0]=bb;
  cout<<"\n" << a <<" "<< b;
    return 0;
}