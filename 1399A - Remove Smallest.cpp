#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    vector<int> vk;
    while(a--){
      int b;
      cin >>b;
      vk.push_back(b);
    }
    bool good = true;
    sort(vk.begin(), vk.end());
    for(int i = 0;i < vk.size()-1;i++){
      if(vk[i] - vk[i+1] <= -2){
        cout << "NO\n";
        good = 0;
        break;
      }
    }
    if(good){
      cout << "YES\n";
    }
  }
}

