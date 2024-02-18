#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;

int cnt = 1;
for(int i=1; i<n; i++){
    if(a[i] == a[i-1])
        cnt++;
    else
        break;
}

int cnt1 = 1;
for(int i=n-1; i>0; i--){
    if(a[i] == a[i-1])
        cnt1++;
    else
        break;
}


if(a[0] == a[n-1] and cnt != n)
    cnt += cnt1;
else
    cnt = max(cnt,cnt1);

cout << n-cnt;


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