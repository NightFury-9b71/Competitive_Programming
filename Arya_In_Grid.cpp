#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

long long n,m,x,y,l; cin >> n >> m >> x >> y >> l;

long long ans = ((n-x)/l + (x-1)/l + 1) * ((m-y)/l + (y-1)/l + 1);

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