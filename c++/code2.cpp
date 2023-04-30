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
#define bug(a)          std::cout<<setprec(6)<<"\t" << #a " -> " << (a) << std::endl; 

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



void slv()
{
    llf x[2],y[2],r[2];
    loopN(2)
    {
        cin>>x[i]>>y[i]>>r[i];
    }

    if(r[0]<r[1])
    {
        swap(x[0],x[1]);
        swap(y[0],y[1]);
        swap(r[0],r[1]);
    }




    llf l=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));

    if(l>=r[0]+r[1])
    {
        cout<<0<<endl;
    }
    else if( l + r[1] <= r[0])
    {
        cout<<setprec(6)<<pi*r[1]*r[1]<<endl;
    }
    else
    {

        llf k = (l*l + r[0]*r[0] - r[1]*r[1])/(2*l);

       // bug(l);
       // bug(k);
        llf a= 2* sqrt (   r[0]*r[0] - k*k );

        llf t1=acos( 1- (a*a)/(2*r[0]*r[0]) );
        llf t2=acos( 1- (a*a)/(2*r[1]*r[1]) );


        if(k>=l)
        {

            llf ans=pi*r[1]*r[1];
            ans-= (r[1]*r[1]*t2)/2 - (a*(k-l))/2;

            ans+=  (r[0]*r[0]*t1)/2- (a*k)/2;

           cout<<setprec(6)<<ans<<endl; 



        }
        else
        {
            llf ans = (r[0]*r[0]*t1)/2;
            ans += (r[1]*r[1]*t2)/2;
            ans -= (a*k)/2;
            ans-= (a*(l-k))/2;
            cout<<setprec(6)<<ans<<endl;
        }



    }

   




    

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
