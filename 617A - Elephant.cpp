#include<bits/stdc++.h>

using namespace std;

int main(){
  int a, c =0;
  cin >> a;
  while(a > 5){
    a-=5;
    c++;
  }
  if(a > 0)cout << c+1;
  else cout << c;
}

