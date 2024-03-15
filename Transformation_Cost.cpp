#include<bits/stdc++.h>
using namespace std;


void ShobEMaya(){

int n; cin >> n;

bitset<30> x(n);
string s = x.to_string();
reverse(s.begin(),s.end());

int i=s.size()-1;
while(s[i] != '1') s.pop_back(),i--;

i=0;
while(s[i] != '1') i++;

vector<int> v;
v.push_back(i);

for(; i<s.size(); i++)
    if(s[i] == '0')
        v.push_back(i);

v.pop_back();

long long ans = 0;
for(auto &i:v)
    ans += (1LL<<i);

cout << ans;
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