#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y;
  cin >>x >> y;
  if(x > y){
    swap(x, y);
  }
  if(x==y)cout<<x<<" "<<0;
  else{
    cout << x << " ";
    cout << (y-x)/2;
  }
}

