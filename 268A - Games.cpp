#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
vector < pair<int,int> > vk;
void check(int i){
  for(int j = 0;j < vk.size();j++){
    if(i != j){
      if(vk[i].first == vk[j].second)cnt++;
    }
  }
}
int main(){
  int x;
  cin >> x;
  while(x--){
    int a, b;
    cin >> a >> b;
    vk.push_back(make_pair(a,b));
  }
  for(int i = 0;i < vk.size();i++){
    check(i);
  }
  cout << cnt;
}

