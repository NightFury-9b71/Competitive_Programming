#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ShobEMaya(){

ll n; cin >> n;

ll i=0;
while(n>=(1LL<<i))
    i++;

cout << (1LL<<--i);


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