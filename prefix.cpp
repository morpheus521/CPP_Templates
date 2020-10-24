#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define dbg(n) cout<<#n<<' '<<n<<endl;
#define dbg_v(v) cout<<#v<<":";for(auto x:v) cout<<" "<<x; cout<<endl;
int power(ll x,ll y){ll res = 1;while(y>0){if(y&1)res = (res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}
vector<int>prefix(string s) {
    int n=(int)s.length();
    vector<int>pre(n);
     pre[0]=0;
    for(int i=1;i<n;++i) {
        int j=pre[i-1];
        while(j>0&&s[i]!=s[j])
            j=pre[j-1];
        if (s[i]==s[j])
			++j;
        pre[i]=j;
    }
    return pre;
}
int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
}

