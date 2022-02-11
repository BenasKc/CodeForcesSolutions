#include<bits/stdc++.h>

using namespace std;

int main(){
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 int s;
 cin >> s;
 int cnt = 0;
 for(int i = 1;i <= s;i++){
  if(i%a==0)cnt++;
  else if(i % b==0)cnt++;
  else if(i % c==0)cnt++;
  else if(i % d==0)cnt++;
 }
 cout << cnt;
}

