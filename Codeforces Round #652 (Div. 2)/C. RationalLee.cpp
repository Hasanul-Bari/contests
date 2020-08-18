#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    faster

    int t,n,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;


        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);

        ll s=0;

        int w[k];

        for(int i=0; i<k; i++)
        {
            cin>>w[i];
        }



        sort(w,w+k);

        for(int i=0,j=n-1; i<k; i++,j--)
        {
            if(w[i]==1)
                s=s+(a[j]*2);
            else
                s=s+a[j];

            w[i]--;
        }

        //cout<<s<<" s"<<endl;

        int z=0;

        for(int i=k-1; i>=0; i--)
        {
            if(w[i]!=0)
            {
                s=s+a[z];

                z=z+w[i];
            }

            //cout<<"ss "<<s<<" zz "<<z<<endl;


        }

        cout<<s<<endl;
    }




    return 0;
}

/*
5
6 3
1 7 9 5 13 17
2 3 1
*/
