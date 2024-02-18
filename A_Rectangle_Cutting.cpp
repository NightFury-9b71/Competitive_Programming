#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int a,b; cin >> a >> b;

string ans = "No";

if(a%2==0){
    if(a/2 != b)
        ans = "Yes";}

if(b%2==0){
    if(b/2 != a )
        ans = "Yes";}

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