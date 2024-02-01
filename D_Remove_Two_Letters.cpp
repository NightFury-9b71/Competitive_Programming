#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
string s; cin >> s;

int ans = n-1;

for(int i=0; i<n-2; i++){
    if(s[i] == s[i+2])
        ans-=1;
}

cout << ans;


}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase;
    cin >> tCase;

while (tCase--){
    ShobEMaya();
    cout << '\n';
}

return 0;
}
