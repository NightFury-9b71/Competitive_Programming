#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >>n ;
int a[n]; for(auto &i:a) cin >> i;

sort(a,a+n);

int sum = 0;
for(int i=1; i<n; i++)
    sum+=(a[i] - a[i-1]);

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