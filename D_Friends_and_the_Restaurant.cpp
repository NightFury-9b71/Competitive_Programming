#include<bits/stdc++.h>
using namespace std;

void ShobEMaya(){

int n; cin >> n;
int a[n]; for(auto &i:a) cin >> i;
for(int i=0,x; i<n and cin >> x; i++) a[i] = x-a[i];

sort(a,a+n,greater<int>());

int i=0,j=n-1,grp=0;

while(i<j){

if(a[i]+a[j] >= 0 )
    grp++,i++;
j--;

}

cout << grp;

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