#include<bits/stdc++.h>

using namespace std;

int main(){
  set<int> a;
  string s;
  cin >> s;
  for(int i = 0; i < s.size();i++){
    a.insert(s[i]);
  }
  if(a.size() % 2 == 0)cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}

