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
const int MX=5e5+5;
vector<int>BIT(MX);
int a[MX], n;
void update(int x, int d){
      for(;x<=n;x+=x&-x)
      //  BIT[x]+=d;
}
int query(int x){
     int s=0;
     for(;x>0;x-=x&-x)
        //s+=BIT[x];
     return s;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
}
