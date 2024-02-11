#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

string ans = "No";
int n,k; cin >> n >> k;
int a[k]; for(auto &i:a) cin >> i;
int b[k]; for(int i=1; i<k; i++) b[i] = a[i] - a[i-1];

if(a[0] > 0)
    b[0] = ceil(1.0*a[0]/(n-(k-1)));
else
    b[0] = a[0]/(n-(k-1));

if(is_sorted(b,b+k))
    ans = "Yes";

cout << ans;
// for(auto &i:b) cout << i << ' ';

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase;
    cin >> tCase;

while (tCase--){
    ShobEMaya();
    cout << '\n';
}

return 0;
}