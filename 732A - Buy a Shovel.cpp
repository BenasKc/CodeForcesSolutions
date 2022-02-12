#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y;
  string s;
  cin >> s >> y;
  x = s[s.size()-1] - '0';
  int i = 1;
  while(x*i % 10 != 0 && ((x)*i-y)%10!=0){
    i++;
  }
  cout << i;
}

