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


lld const sz=1e6;
vector <lld > prime;
void findPrime (lld n)
{
    bool a[n+1];
    for( lld i=0; i<=n; i++)
    {
        a[i]=1;
    }
    for(lld i=2; i*i<=n; i++)
    {
        if(a[i]==1)
        {
            for(lld j=i*i; j<=n; j+=i)
            {
                a[j]=0;
            }
        }

    }
    for(lld i=2; i<=n; i++)
    {
        if(a[i])
        {
            prime.push_back(i);
        }
    }


}

vector<lld>z[sz+5];


lld dp[100000+5][sqrt(100000)+5];
lld a[sz+5];

lld fun(lld p,lld k)
{

    set <lld>s;
    lld ans=0;

    if(k)
    {
        loopN(z[a[p]].size())
        {
            s

            


        }


    }
    else
    {




    }

    









}



void slv()
{

    lld n,k;
    cin>>n>>k;
    loopN(n)cin>>a[i];


























}

int main()
{
    ISO;
    findPrime(sqrt(sz)+50);




    lld p=0;
    lld k;

    loop(1,sz)
    {

        p=0;
    
        //cout<<"i="<<i<<endl;

        while(prime[p]*prime[p]<=i)
        {
         
            if(i%prime[p]==0)
            {
                z[i].pb(p);
                  // cout<<"p="<<prime[p]<<endl;
            }

        p++;
        }
    }








    lld idx=1;
    //lld t;cin>>t;while(t--)
    {
        //case(idx++);
        slv();
    }
    return 0;
}

/*




*/
