#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int a,b,c,d; cin >> a >> b >> c >> d;
int ans = 0;

if(b>c) swap(b,c);

if(!a and (b+c+d))
    ans = 1;
else{
    ans += a;
    ans += (2*b);
    c-=b;
    ans+=(min(a+1,c+d));
}

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
