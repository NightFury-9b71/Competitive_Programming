#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n,k;
    cin >> n >> k;

int x = k/(n-1);

int ans = k+x;

if(ans%n == 0)
    ans-=1;

cout << ans;




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
