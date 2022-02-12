#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  int a = 0;
  while(x--){
    string s;
    cin >> s;
    if(s == "Tetrahedron")a += 4;
    else if(s == "Cube")a+=6;
    else if(s == "Octahedron")a+=8;
    else if(s == "Dodecahedron")a+=12;
    else if(s == "Icosahedron")a+=20;
  }
  cout << a;
}

