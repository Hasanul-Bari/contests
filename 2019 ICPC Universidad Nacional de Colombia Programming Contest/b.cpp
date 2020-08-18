#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

char s[5009];
//char tmp[5005]
/*bool isPal(int x,int y)
{
              cout<<"entered "<<endl;
              cout<<"idx  "<<x<<"  "

    int t=y-x+1;
    int k=0;
    for(int i=x; i<=y/2; i++)
    {
        cout<<s[i]<<" vs "<<s[y-k]<<endl;
        if(s[i]!=s[y-k])
            return false;
        k++;
    }

    return true;

}
*/


bool isPal(int x,int y)
{
    int l = x;
    int h = y;

    while (h > l)
    {
        if (s[l++] != s[h--])
        {

            return false;
        }
    }
    return true;
}



int main()
{
    faster


    cin>>s;

    int x=strlen(s);

    char ans[5009];

    int k=-1;

    for(int i=0; i<x; i++)
    {
        if(isPal(i,x-1))
        {

          // cout<<"entered at"<<i<<endl;
            cout<<s;//cout<<"   k"<<k<<endl;
            for(int j=k; j>=0; j--)
                cout<<s[j];//<<"---";
            cout<<endl;
            break;
        }
        else
        {
            //cout<<"k  "<<k<<endl;
            k++;
        }

    }




    return 0;
}
