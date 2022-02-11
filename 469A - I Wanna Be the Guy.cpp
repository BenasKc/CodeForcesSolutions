#include<bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int a, b;
  cin >> a;
  set<int> st;
  for(int i = 0;i < a;i++){
    int f;
    cin >> f;
    st.insert(f);
  }
  cin >> b;
  for(int i = 0;i < b;i++){
    int f;
    cin >> f;
    st.insert(f);
  }
  if(st.size() >= x){
    cout << "I become the guy.";
  }
  else cout << "Oh, my keyboard!";
}

