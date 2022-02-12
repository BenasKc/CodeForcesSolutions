#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  while(x--){
    int a, b;
    cin >> a >> b;
    if((abs(a-b))%10 != 0)cout << (abs(a-b))/10+1 << endl;
    else cout << (abs(a-b))/10 << endl;
  }
}

