#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    char arr[a];
    bool sus = false;
    set<int> st;
    char prev=-1;
    for(int i = 0;i < a;i++){
      cin >> arr[i];
      if(i != 0){
        if(prev != arr[i]){
          int sz = st.size();
          st.insert(arr[i]);
          if(sz == st.size())sus=true;
        }
      }
      prev = arr[i];
      st.insert(prev);
    }
    if(sus)cout << "NO\n";
    else cout <<"YES\n";
  }
}

