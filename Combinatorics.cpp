#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define PI 3.141592653589793238
#define all(a) a.begin(),a.end()
#define dbg(n) cout<<#n<<' '<<n<<endl;
#define dbg_v(v) cout<<#v<<":";for(auto x:v) cout<<" "<<x; cout<<endl;
ll power(ll x,ll y){ll res = 1;while(y>0){if(y&1)res = (res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}
const int MX=5e5+1;
ll facti[MX],fact[MX],inv[MX];
void factorial(){
	inv[1]=1;
	facti[0]=1;
	fact[0]=1;
	for(ll i=2;i<=MX;i++)
		inv[i]=(mod-((mod/i)*inv[mod%i])%mod)%mod;
	for (ll i=1;i<=MX;i++) {
		fact[i]=(fact[i-1]*i)%mod;
		facti[i]=(facti[i-1]*inv[i])%mod;
	}
}
ll nCr(int n,int r){
	ll ans=((fact[n]*facti[n-r])%mod*facti[r])%mod;
	return ans;
} 
void solve(){
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	factorial();
	int T=1;
	//cin>>T;
	while(T--)
		solve();
}
