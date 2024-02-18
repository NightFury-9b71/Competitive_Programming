#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
string s; cin >> s;

int cnt = 0;
for(int i=0; i<n; i++){
    if(i+1 < n and s[i]=='*' and s[i+1]=='*') break;
    
    cnt+=(s[i]=='@');
}

cout << cnt;

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}