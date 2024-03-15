#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n; 
int a[n]; for(auto &i:a) cin >> i;

sort(a,a+n);

int i,j,k,l;

i = a[n-1]; j = a[0]; k = a[n-2]; l = a[1];

int sum = abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);

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