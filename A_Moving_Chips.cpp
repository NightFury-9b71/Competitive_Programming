#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
vector<short> v(n); 
for(int i=0; i<n; i++){
    short x; cin >> x;
    v.push_back(x);
}

while(!v.back()) v.pop_back();
reverse(v.begin(),v.end());
while(!v.back()) v.pop_back();

int ans = count(v.begin(),v.end(),0);

cout << ans;


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