#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

long long n; cin >> n; 
long long sum = 0;

if(n&1)
    sum+=(n+1)/2;

n/=2;
sum+= 2*(n*(n+1)/2);

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