#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int i, row,j;
    cout<<"enter number";

    cin>>row;


    for(i=0;i<row;i++){
      for(j=0;j<i;j++){
          cout<<"*";
      }
      cout<<"\n";
    }
    return 0;
}

