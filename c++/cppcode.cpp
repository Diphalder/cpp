#include<bits/stdc++.h>
#define lld             long long
#define llf             long double
#define ull             signed long long
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
#define bug(a)          std::cout << #a " -> " << (a)<<" "; 

//_______________________________________________
#define on(m,p)         (m|(1LL<<p))
#define off(m,p)        (~(~m|(1<<p)))
#define ison(m,p)       ((bool)(m&1LL<<p))
#define flip(m,p)       (m^(1<<p))
#define nbitON(p)       ((1<<p)-1)
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


lld num;

lld dp[51][2][2][2];

lld fun(lld x, bool prv , bool z,bool k )
{
   // bug(x);bug(prv);bug(z);bug(k);nl;
    lld ans=0;
    bool ff;

    if(x<0)
    {
        return k;
    }
    retdp(dp[x][prv][z][k]);


    if(z==0)
    {
        ans=fun(x-1 ,ison(num,x) , z , k||(prv && ison(num,x)));
        if(ison(num,x))
        {
            ans+=fun(x-1, 0 , 1 , k);
        }
        
    }
    else
    {
        if(k)
        {
            ans=pow(2,x+1);
        }
        else
        {
            ans = fun(x-1 , 0 , z , k );
            ans+= fun(x-1 , 1 , z , k||prv);

        }

    }

  //  bug(x);bug(prv);bug(z);bug(k);bug(ans);nl;

    return dp[x][prv][z][k]=ans;
    //return ans;


}



 


void slv()
{


    lld z;
    cin>>z;

    lld hi=1e14,lw=z,mid;
    lld ans;

    lld dip=-1;

    while(lw<=hi)
    {
        mem(dp,-1);
        mid=(hi+lw)/2;
        num=mid;
        ans=fun(50,0,0,0);

        //bug(ans);nl;

        //bug(lw);bug(hi);nl;

        //bug(mid);bug(ans);nl;

      //  cout<<"\t"<<z+ans<<"-"<<mid<<"="<<z+ans-mid;nl;

        
        if(z+ans<=mid)
        {
            dip=mid;
            hi=mid-1;
        }
        else if(z+ans>mid)
        {
            lw=mid+1;
        }

    }

    //bug(dip);nl;
    lld f=0;

    rloop(0,50)
    {
        if(ison(dip,i))
        {
            f=1;
        }
        if(f)
        {
            cout<<ison(dip,i);
        }
    
    }
    nl;


}


int main()
{
    /*
     loop(1,20)
    {
        mem(dp,-1);
        num=i;
        cout<<i<<" "<<fun(50,0,0,0);nl;
    }
    
    */




    ISO;
    lld idx=1;
    lld t;
    cin>>t;
    while(t--)
    {
        case(idx++);
        slv();
        //test();
    }
    return 0;
}

/*




*/
