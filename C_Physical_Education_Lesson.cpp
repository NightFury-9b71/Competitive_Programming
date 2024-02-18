#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ShobEMaya(){

ll a,b; cin >> a >> b;
ll cnt = 0;

ll i=2; 
ll z = 1;

while(z<a){

z = 2*i - 2;

if(a%z == b)
    cnt++;
else{
    ll y = ((a/z - 1) * z);
    if(a - y == b)
        cnt++;

    if(y == 0 and b==2)
        cnt++;
}
i++;
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