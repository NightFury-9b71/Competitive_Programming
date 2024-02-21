#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
multiset<int> ms; for(int i=0,x; i<n and cin >> x; i++) ms.insert(x);

int ans = 0;
while((int)ms.size()){
    bitset<31> x (*ms.begin());

    int y = x.flip().to_ulong();
    auto f = ms.find(y);
    ms.erase(ms.begin());

    if(f!=ms.end())
        ms.erase(f);

    ans++;
}

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