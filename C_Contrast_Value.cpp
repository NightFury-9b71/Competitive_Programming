#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
vector<int>a(n); for(auto &i : a) cin >> i;

int cnt = 0;

a.resize(unique(a.begin(),a.end())-a.begin());

for(int i=0; i<a.size(); i++){
    if(i==0 or i==a.size()-1 or (a[i] > a[i+1] and a[i] > a[i-1]) or (a[i] < a[i+1] and a[i] < a[i-1]) )
        cnt++;
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