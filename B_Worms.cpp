#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

map<int,int> mp;
mp[a[0]] = 1;

for(int i=1; i<n; i++) 
    mp[a[i]+=a[i-1]] = i+1;

int q; cin >> q;

while(q--){

    int x; cin >> x;
    int y = *lower_bound(a,a+n,x);
    cout << mp[y] << '\n';
}


}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

// int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}