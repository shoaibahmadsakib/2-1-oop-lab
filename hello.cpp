
// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Driver Code
int main(){
  int n =5;
  int j,i;
  for(i=n; i>0; i--){
    for(j=0;j<=n;j++){
      if(j>=i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }

    }
    cout<<endl;
  }
  return 0;
}