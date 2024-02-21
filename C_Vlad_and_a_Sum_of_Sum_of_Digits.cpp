#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+10;
int pre[N];

int dsum(int x){
    int sum = 0;
    while(x){
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

void cal(){
    for(int i=1; i<N; i++){
        pre[i] = pre[i-1]+dsum(i);
    }

}

void ShobEMaya(){

int n; cin >> n;

cout << pre[n];

}

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);
cal();
int tCase; cin >> tCase; while (tCase--)
{
    ShobEMaya();
    cout << '\n';
}

return 0;
}