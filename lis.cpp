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
int ci(vector<int>& v,int l,int r,int key) 
{ 	while (r-l>1) { 
        int m=l+(r-l)/2; 
        if (v[m]>=key) 
            r=m; 
        else
            l=m; 
    } 
    return r; 
} 
  
int lis(vector<int>& v) 
{ 
    if ((int)v.size() == 0) 
        return 0; 
    vector<int> tail((int)v.size(), 0); 
    int len = 1; 
    tail[0]=v[0]; 
    for (int i=1;i<(int)v.size();i++) { 
		if(v[i]<tail[0]) 
            tail[0]=v[i]; 
		else if(v[i]>tail[len-1]) 
            tail[len++]=v[i]; 
		else
            tail[ci(tail,-1,len-1,v[i])]=v[i]; 
    } 
  
    return len; 
}
void solve(){

}
int main(){ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int T;
	cin>>T;
	while(T--)
		solve();
}


