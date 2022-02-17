#include <bits/stdc++.h>

using namespace std;

int main(){
  string h = "HQ9";
  string a;
  cin >> a;
  for(int i = 0;i < a.size();i++){
    for(int j = 0;j < h.size();j++){
      if(a[i]==h[j]){
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}

