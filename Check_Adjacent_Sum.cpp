#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n,q; cin >> n >> q;
int sum = 0;
int a[n];
for(auto &i:a) cin >> i;

for(int i=0; i<n; i++)
    sum+=(2*a[i]);

while(q--){
    bool ans = false;
    int st,en;
    int x; cin >> x;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(sum - (a[i]+a[j]) == x) {
                ans = true;
                st = i;
                en = j;
                break;
            }
        }
    }

    if(ans){
        cout << a[st] << ' ';
        for(int i=0; i<n; i++){
            if(i == st or i == en) continue;
            cout << a[i] << ' ';
        }
        cout << a[en];
    }
    else
        cout << -1;

    cout << '\n';
}


}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    // cout << '\n';
}

return 0;
}