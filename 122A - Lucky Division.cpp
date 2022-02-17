#include <bits/stdc++.h>

using namespace std;
bool lucky(int a){
  int sz = log10(a);
  for(int i =0;i<=sz;i++){
    if(a%10 != 4 && a%10 != 7)return 0;
    a/=10;
  }
  return 1;
}
int main(){
  int x;
  cin >> x;
  if(lucky(x)){
    cout << "YES\n";
    return 0;
  }
  for(int i = 0;i < x;i++){
    if(lucky(i+1) && x%(i+1)==0){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}

