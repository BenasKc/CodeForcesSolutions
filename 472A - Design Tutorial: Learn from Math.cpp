#include <bits/stdc++.h>

using namespace std;
bool is_composite(int x){
  int dal = 0;
  for(int i =1;i <= x;i++){
    if(x % i == 0)dal++;
  }
  return dal > 2 ? 1 : 0;
}
int main(){
  int x;
  cin >> x;
  for(int i = 1;i < x/2+1;i++){
    if(is_composite(i) && is_composite(x-i)){
      cout << i << " " << x-i;
      return 0;
    }
  }
}

