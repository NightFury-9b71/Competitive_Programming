#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;
int sum = 0;
int a[n];
for(auto &i:a) cin >> i;

sort(a,a+n);

for(int i=2; i<n; i++)
    sum+=(2*a[i]);

sum+=(a[0]+a[1]);

cout << sum;




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