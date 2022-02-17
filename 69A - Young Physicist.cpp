#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int x;
  cin >> x;
  long long int xx=0,yy=0,zz=0;
  for(int i =0;i<x;i++){
    for(int j=0;j<3;j++){
      long long int a;
      cin >> a;
      if(j == 0)xx+=a;
      else if(j == 1)yy+=a;
      else zz+=a;
    }
  }
  if(xx == 0 && yy == 0 && zz == 0)cout <<"YES\n";
  else cout << "NO\n";
}

