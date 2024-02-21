#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
map<int,int> mp;

for(int i=0,x; i<n and cin >> x; i++)
    mp[x]++;

mp[-1]=0;

vector<pair<int,int>> p;

for(auto &[x,y]:mp) 
    p.push_back({x,y});


int ans = 0;
for(int i=1; i<(int)p.size(); i++){

    if(p[i].first - p[i-1].first == 1){
        if(p[i].second > p[i-1].second)
            ans+=(p[i].second-p[i-1].second);
    }
    else
        ans+=p[i].second;

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