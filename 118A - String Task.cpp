#include <bits/stdc++.h>

using namespace std;

int main(){
  string r, a="AEYUIO", f;
  cin >> r;
  for(int i =0;i < r.size();i++)
  {
    bool dot = false;
    for(int j = 0;j < a.size();j++){
      if(toupper(r[i]) == a[j]){
        dot = true;
        break;
      }
    }
    if(!dot){
    f+=".";
    f+=(tolower(r[i]));
    }
  }
  cout << f << endl;
}

