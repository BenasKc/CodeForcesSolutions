#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  long long int a = count(s.begin(), s.end(), '7') + count(s.begin(), s.end(), '4');
  string sz = to_string(a);
  for(int i = 0;i < sz.size();i++){
    if(sz[i] != '4' && sz[i] != '7'){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}

