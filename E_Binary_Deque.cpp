#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n,s; cin >> n >> s;
vector<int> v;
for(int i=0; i<n; i++){
    bool x; cin >> x;
    if(x) 
        v.push_back(i+1);
}

if(v.size() < s) cout << -1;
else if(v.size() == s) cout << 0;
else{
    int ans = INT_MAX;
    for(int i=0; i<v.size(); i++){
        int cost = 0;
        if(i-1 >= 0)
            cost+=v[i-1];
        
        if(i+s < v.size())
            cost+=(n-(v[i+s]-1));

        ans = min(cost,ans);
    }

    cout << ans;

}

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