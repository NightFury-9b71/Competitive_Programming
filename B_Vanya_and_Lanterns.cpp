#include<bits/stdc++.h>
using namespace std;


double ShobEMaya(){
ios_base::sync_with_stdio(false);cin.tie(NULL);

int n,k; cin >> n >> k;
int a[n]; for(auto &i:a) cin >>i;

sort(a,a+n);

double ans = 0;

if(a[0] != 0)
    ans = a[0];

for(int i=0; i<n-1; i++){
    double x = (a[i+1]-a[i])/2.0;
    ans = max(ans,x);
}

if(a[n-1] != k)
ans = max(ans,(double)(k-a[n-1]));

return ans;


}

int main(){


{
    printf("%lf",ShobEMaya());
    cout << '\n';
}

return 0;
}
