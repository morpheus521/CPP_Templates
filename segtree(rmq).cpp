#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(a) a.begin(),a.end()
#define dbg(n) cout<<#n<<' '<<n<<endl;
#define dbg_v(v) cout<<#v<<":";for(auto x:v) cout<<" "<<x; cout<<endl;
ll power(ll x,ll y){ll res = 1;while(y>0){if(y&1)res = (res*x)%mod;y=y>>1;x=(x*x)%mod;}return res;}
const int MX=2e5+5,INF=1e9+5;
int n,segt[4*MX];

void build(int a[],int v,int tl,int tr){
    if(tl==tr){
        segt[v]=a[tl];
    } 
    else{
        int tm=(tl+tr)/2;
        build(a,v*2,tl,tm);
        build(a,v*2+1,tm+1,tr);
		segt[v]=min(segt[v*2],segt[v*2+1]);//condition   
    }
}

int query(int v,int tl,int tr,int l,int r){
    if (l>r) 
        return INF; //condition
    if (l==tl&&r==tr){
        return segt[v];
    }
    int tm=(tl+tr)/2;
    return min(query(v*2,tl,tm,l,min(r, tm)),query(v*2+1,tm+1,tr,max(l,tm+1),r));//condition 
}

void update(int v,int tl,int tr,int pos,int val){
    if (tl==tr){
        segt[v]=val;
    } 
    else{
        int tm=(tl+tr)/2;
        if (pos<=tm)
            update(v*2,tl,tm,pos,val);
        else
            update(v*2+1,tm+1,tr,pos,val);
		segt[v]=min(segt[v*2],segt[v*2+1]);//condition 
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int q;
	cin>>n>>q;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	build(a,1,1,n);
	while(q--){
		int t,l,r;
		cin>>t>>l>>r;
		if(t%2){
			update(1,1,n,l,r);
		}
		else
			cout<<query(1,1,n,l,r)<<endl;
	}	
}

