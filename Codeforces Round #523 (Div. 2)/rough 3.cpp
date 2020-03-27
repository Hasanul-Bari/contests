#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
int main()
{
    int n;
    ll s;
    cin>>n>>s;
    ll sum=0;
    int i=n;
    while(s!=0&&sum!=s&&i!=0)
    {
        if(s/i>0)
        {
            sum=sum+s/i;
            s=s-(s/i)*i;
        }
        i--;
        cout<<sum<<"    "<<s<<endl;
    }
    pf("%d",sum);
    return 0;
}
