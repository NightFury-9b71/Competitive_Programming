#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

long long n; cin >> n;
long long sum = (n*(n+1))/2;

sum-=1;
sum+=n;

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