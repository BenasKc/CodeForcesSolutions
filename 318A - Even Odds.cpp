#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a, b;
  cin >> a >> b;
  if(a%2!=0 && a/2==b-1)cout << a;
  else if(a/2 >= b){
    long long int n = b-1;
    cout << (n*2)+1;
  }
  else if(a/2 < b){
    long long int n;
    if(a%2==0)n = abs(a/2-(b));
    else n = abs(a/2-(b-1));
    cout << n*2;
  }
}

