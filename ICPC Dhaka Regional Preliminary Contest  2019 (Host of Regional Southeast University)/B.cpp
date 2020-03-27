/*Never Give up*/
/*
Problem  :
Verdict     :
Time         :
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1(a)        pf("%d\n",a);
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)
#define PI            acos(-1.0)

// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{

    int t;
    sf(t);
    int kk=1;
    while(t--)
    {
        int n;
        sf(n);
        bool flag=true;
        vi penalty[n+1];
        int seq[n];
        int pt[n+1];
        int sol[n+1];
        int pending[n+1];
        for(int i=0; i<n; i++)
        {
            int id;
            sf(id);

            sf(sol[id]);
            sf(pt[id]);///first penalty time

            int froz;
            sf(froz);
            pending[id]=froz;
            for(int i=0; i<froz; i++)
            {
                int x;
                sf(x);
                penalty[id].pb(x);
            }
        }

        int tmpsolve,tmppenalty;


        int idd;
        sf(idd);

        for(int j=0; j<penalty[idd].size(); j++)
        {
            pt[idd]+=penalty[idd][j];
        }

        tmpsolve=sol[idd]+sz(penalty[idd]);
        tmppenalty=pt[idd];


        for(int i=1; i<n; i++)
        {
            sf(idd);
            if(sol[idd]>tmpsolve)
            {
                flag=false;
                continue;
            }
            else if(sol[idd]==tmpsolve&&pt[idd]<tmppenalty)
            {
                flag=false;
                continue;
            }
            else if(sol[idd]==tmpsolve&&pt[idd]==tmppenalty)
            {

                tmpsolve=sol[idd];
                tmppenalty=pt[idd];
                continue;
            }
            int c=0;
            while(sol[idd]<=tmpsolve&&pt[idd]<=tmppenalty&&c<sz(penalty[idd]))
            {
                if(sol[idd]+1<=tmpsolve&&pt[idd]+penalty[idd][c]<=tmppenalty)
                    sol[idd]++;
                pt[idd]+=penalty[idd][c++];
            }

            tmpsolve=sol[idd];
            tmppenalty=pt[idd];

        }

        if(flag)
            pf("Case %d: We respect our judges :)\n",kk++);
        else
            pf("Case %d: Say no to rumour >:\n",kk++);
    }


    return 0;
}
/*
Ref:
*/

