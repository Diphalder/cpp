
#include<bits/stdc++.h>
#define lld             long long int
#define llf             long double
#define pb              push_back
#define mp              make_pair
#define in              insert
#define loopN(n)        for(lld i=0;i<n;i++)
#define loopN2(n)       for(lld j=0;j<n;j++)
#define loop(p,n)       for(lld i=p;i<=n;i++)
#define rloop(p,n)      for(lld i=n;i>=p;i--)
#define loop2(p,n)      for(lld j=p;j<=n;j++)
#define looop(p,n,i)    for(lld i=p;i<=n;i++)
#define rlooop(p,n,i)   for(lld i=n;i>=p;i--)
#define iloop(it,m)     for(it=m.begin();it!=m.end();it++)
#define all(v)          v.begin(),v.end()
#define ff              first
#define ss              second
#define INF             2e18
#define FILE            freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define pi              (2*acos(0.0))
#define mod             (1e9+7)
#define ISO             ios::sync_with_stdio(false);cin.tie(0)
#define mem(a,b)        memset(a,b,sizeof(a))
#define case(z)         cout<<"Case "<<z<<": "
#define setprec(a)      fixed<< setprecision(a)
#define pii	            pair<lld,lld>
#define retdp(a)        if(a!=-1)return a
#define yes             cout<<"YES"
#define no              cout<<"NO"
#define nl              cout<<endl
#define low(a,n,x)      lower_bound(a,a+n,x)-a;
#define up(a,n,x)       upper_bound(a,a+n,x)-a;
#define bug(a)          std::cout << #a " -> " << (a) << std::endl;

//_______________________________________________
#define on(m,p)         (m|(1LL<<p))
#define off(m,p)        (~(~m|(1LL<<p)))
#define ison(m,p)       ((bool)(m&(1LL<<p)))
#define flip(m,p)       (m^(1LL<<p))
#define nbitON(p)       ((1LL<<p)-1)
//_______________________________________________
using namespace std;

/*
fstream fin;
    fin.open ("mytext.txt");

map< , > :: iterator it


*/
lld fx[]= {1,0,-1, 0,1, 1,-1,-1};
lld fy[]= {0,1,0,-1,1,-1,1,-1};
//_______________________________________________

lld a[12][12];

lld n;

lld fun(lld k)
{
    lld ans=0;
    loop(k,n-1-k)
    {
        ans+=a[k][i];
    }
    if(k!=n-1-k)
    {
        loop(k,n-1-k)
        {
            ans+=a[n-1-k][i];
        }

    }


    loop(k+1,n-1-k-1)
    {
        ans+=a[i][k];
    }

    loop(k+1,n-1-k-1)
    {
        ans+=a[i][n-1-k];
    }
    return ans;

}


void slv()
{
    loopN(n)loopN2(n)cin>>a[i][j];




    loop(0,(n-1)/2)
    {
        cout<<fun(i);
        if(i!=(n-1)/2)cout<<" ";
    }
    cout<<endl;







}

int main()
{
    ISO;
    lld idx=1;
    //lld t;cin>>t;
    while(1)
    {

        cin>>n;
        if(!n)break;
        case(idx++);
        slv();
    }
    return 0;
}

/*

5
5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3
1
1
0



*/
