#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  getline(cin, s);
  set<int> st;
  for(int i = 0;i < s.size();i++){
    if(isalpha(s[i])){
      st.insert(s[i]);
    }
  }
  cout << st.size();
}

