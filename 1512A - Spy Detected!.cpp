#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a;
    cin >> a;
    pair<int, int> p={0,0};
    pair<int, int> P={0,0};
    pair<int,int> index={-1,-1};
    for(int i = 0;i < a;i++){
      if(i == 0){
        cin >> p.first;
        p.second++;
        index.first = i;
      }
      else{
        int z;
        cin >> z;
        if(z != p.first){
          P.first = z;
          P.second++;
          index.second = i;
        }
        else{
          p.second++;
          index.first = i;
        }
      }
    }
    if(p.second > 1){
      cout << index.second+1 << endl;
    }
    else cout << index.first+1 << endl;

  }
}

