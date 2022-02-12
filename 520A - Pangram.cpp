#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  string f;
  cin >> f;
  set<char> st;
  for(auto i : f){
    st.insert(toupper(i));
  }
  if(st.size() == 26){
    cout << "YES";
  }
  else cout << "NO";
}

