#include<bits/stdc++.h>
#define lld             long long int
#define llf             long double
#define pb              push_back
#define popb            pop_back
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
#define mod             (lld)(1e9+7)
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
//__________Fenwick Tree__________________________
#define rmvLastBit(n)   n=n-(n&-n)
#define child_node(n)   n=n-(n&-n)
#define par_node(n)     n=n+(n&-n)
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

lld const sz = 1e5+5;
lld tree[sz];
lld n;

vector<pair<lld,lld>>a;

void ini()
{
    //tree range [1,n]
    loop(1,n)
    {
        tree[i]=0;
    }
}

void set_val(lld p, lld val)
{
    while(p<=n)
    {
        tree[p]+=val;
        tree[p]%=mod;
        p=par_node(p);
    }

}

lld sum_upto(lld p)
{
    lld sum=0;
    while(p)
    {
        sum+=tree[p];
        sum%=mod;
        p=child_node(p);
    }
    return sum%mod;
}

bool cmp(pair <int,int> a, pair <int,int> b)
{
    if(a.first != b.first)
        return a.first<b.first;
    return a.second>b.second;
}


void slv()
{
    
    cin>>n;
    lld x;
    pair<lld,lld>pr;
    map<lld,lld> minpos;
    
    loopN(n)
    {
        cin>>x;
        pr=mp(x,i);
        a.pb(pr);

        if(minpos[x]==0)
        {
            minpos[x]=i+1;
        }
        else
        {
            minpos[x]=min(minpos[x],i+1);
        }
        
    }

    ini();
    sort(all(a),cmp);

    lld mpos,val,pos;

    loopN(n)
    {
        
   
        pos=a[i].ss+1;
        val=sum_upto(pos-1);
        set_val(pos,val+1);

 


    }
    a.clear();

    cout<<sum_upto(n)%mod<<endl;


}

int main()
{
    ISO;
    lld idx=1;
    lld t;cin>>t;while(t--)
    {
        case(idx++);
        slv();
    }
    return 0;
}

/*




*/
