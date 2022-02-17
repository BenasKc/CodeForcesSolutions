#include <bits/stdc++.h>

using namespace std;

int main(){
  string h = "hello";
  string a;
  cin >> a;
  int index = 0;
  for(int i = 0;i < a.size();i++){
    if(a[i] == h[index])index++;
    if(index == 5)break;
  }
  if(index == 5)cout << "YES\n";
  else cout << "NO\n";
}

