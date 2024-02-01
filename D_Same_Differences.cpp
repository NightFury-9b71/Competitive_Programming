#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n];
for(auto &i:a) cin >> i;

unordered_map<int,int> mp;

for(int i=0; i<n; i++)
    mp[a[i]-i]++;

long long ans = 0;
for(auto &[x,y] : mp)
    if(y) ans+=(1LL*y*(y-1)/2);

cout << ans << '\n';




}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase;
    cin >> tCase;

while (tCase--)
    ShobEMaya();

return 0;
}
