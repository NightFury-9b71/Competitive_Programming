#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n,a,b; cin >> n >> a >> b;

string ans = "Alice";

if(a>n){ 
    cout << ans;
    return;
}

if((a==b and (n-(a+1))%(a+1)==0) or a<b) ans = "Bob";

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