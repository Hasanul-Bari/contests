#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,x,l;
    char c;
    string s;
    cin>>t;
    double ans2;
    for(int i=0; i<t; i++)
    {
        cin>>k;
        map<char,int> m;
        for(int j=0; j<k; j++)
        {
            cin>>c>>x;
            m[c]=x;
        }

        scanf("%d ",&l);
        int ans=0;
        for(int j=0; j<l; j++)
        {
            getline(cin,s);
            for(int h=0; h<s.length(); h++)
                ans=ans+m[s[h]];
        }

        ans2=ans/100.00;

        printf("%.2lf$\n",ans2);

    }

    return 0;
}
