#include<bits/stdc++.h>

using namespace std;

int main(){
  set<long long int> st;
  for(int i = 0;i < 4;i++){
    int f;
    cin >> f;
    st.insert(f);
  }
  cout << 4-st.size();
}

