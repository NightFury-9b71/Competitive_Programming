#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

long long x = a[0];

for(int i=1; i<n; i++){
    x = 1LL*a[i]*(int)ceil((x+1)*1.0/a[i]);
}

cout << x;
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