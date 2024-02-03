#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

vector<int> b;

b.push_back(a[0]);

for(int i=0; i<n-1; i++){
    b.push_back(lcm(a[i],a[i+1]));
}

b.push_back(a[n-1]);

string ans = "YES";

for(int i=0; i<b.size()-1; i++){
    if(gcd(b[i],b[i+1]) != a[i])
        ans = "NO";
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