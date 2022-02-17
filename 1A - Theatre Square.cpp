#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a, b, c;
  cin >> a >> b >> c;
  long long int x = a/c, y = b/c;
  if(b % c != 0){y++;}
  if(a % c != 0){x++;}
  cout <<x*y << '\n';
}

