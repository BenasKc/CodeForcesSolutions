#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, m = 0, c = 0;
  cin >> a;
  while(a--){
    int x,y;
    cin >> x >> y;
    if(x > y)m++;
    else if(x < y)c++;
  }
  if(m > c)cout << "Mishka\n";
  else if(m < c)cout << "Chris\n";
  else cout << "Friendship is magic!^^\n";
}

