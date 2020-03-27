#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int aa[5];
    string s;
    for(int h=0; h<t; h++)
    {
        cin>>s;
        int a1=-1, a2=-1,b1=-1,b2=-1,c1=-1,c2=-1,d1=-1,d2=-1,e1=-1,e2=-1,a,b,c,d,e;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                a2=i;
                if(a1==-1)
                    a1=i;
            }
            else if(s[i]=='b')
            {
                b2=i;
                if(b1==-1)
                    b1=i;
            }

            else if(s[i]=='c')
            {
                c2=i;
                if(c1==-1)
                    c1=i;
            }

            else if(s[i]=='d')
            {
                d2=i;
                if(d1==-1)
                    d1=i;
            }

            else if(s[i]=='e')
            {
                e2=i;
                if(e1==-1)
                    e1=i;
            }

        }

        aa[0]=a2-a1;
        aa[1]=b2-b1;
        aa[2]=c2-c1;
        aa[3]=d2-d1;
        aa[4]=e2-e1;

        //cout<<aa[0]<<" "<<aa[1]<<" "<<aa[2]<<" "<<aa[3]<<" "<<aa[4]<<endl;

        sort(aa,aa+5);
        cout<<aa[4]+1<<endl;

    }

    return 0;



}
