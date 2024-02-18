#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ShobEMaya(){

ll n; cin >> n;
ll s = 0;
ll a[n]; for(auto &i:a) cin >> i,s+=i;

string ans = "YES";

ll av = s/n;
ll sum = 0;

for(int i=0; i<n; i++){
    if(a[i] > av){
        sum+=(a[i]-av);
        a[i] = av;
    }
    else{
        sum-=(av-a[i]);
        if(sum<0)
            break;
        a[i] = av;
    }
}

for(int i=0; i<n; i++)
    if(a[i] != av)
        ans = "NO";

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