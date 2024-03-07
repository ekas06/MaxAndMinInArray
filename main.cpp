#include <iostream>
using namespace std;

int main() {
  cout<<"Enter the size of array";
  int n;
  cin>>n;
  int a[n];
  cout<<"enter the elements of array:\n";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int maxi=a[0];
  int mini=a[0];
  for(int i=0;i<n;i++){
    maxi=max(a[i],maxi);
    mini=min(a[i],mini);
  }
  cout<<"maximum is "<<maxi<<endl;
  cout<<"minimum is "<<mini<<endl;
}