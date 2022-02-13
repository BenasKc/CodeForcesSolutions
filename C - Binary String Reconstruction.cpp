#include <bits/stdc++.h>

using namespace std;
// I used some help on this one, I couldn't figure out how should I get back to the same string I started. I took a hint from https://codeforces.com/blog/entry/81942 Solution (Roms).
int main(){
  int x;
  cin >> x;
  while(x--){
    string a;
    int b;
    cin >> a >> b;
    string s (a.size(), '1');

    for(int i = 0;i < a.size();i++){
      if(a[i] == '0'){
        if(i>=b)s[i-b] = '0';
        if(i+b < a.size())s[i+b] = '0';
      }
    }
    string f (a.size(), '1');
    for(int i = 0;i < a.size();i++){
      if((i >= b && s[i-b] == '1') || (i+b < s.size() && s[i+b]=='1') ){
        f[i] = '1';
      }
      else f[i] = '0';
    }
    if(f == a)cout << s << endl;
    else cout << -1 << endl;
  }
}

