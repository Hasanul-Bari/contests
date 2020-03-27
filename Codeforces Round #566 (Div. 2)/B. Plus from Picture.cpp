#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

int dx[]={-1,-1,-1,-2};
int dy[]={-1,0,1,0};

int main()
{
    faster
    int h,w;
    cin>>h,w;

    char a[h][w];

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>a[i][j];
        }
    }



    int c=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if(a[i][j]=='*' && c==0)
            {
                int d=0;
                int dd[4][2];
                for(int k=0; k<4; k++)
                {
                    int p=i+dx[k];
                    int q=j+dy[k];
                    if(p>=0 && p<h && q>=0 && q<w)
                    {
                        if(a[p][q]=='*')
                        {
                            d++;
                            dd[k][0]=p;
                            dd[k][1]=q;
                        }

                    }
                }

                if(d==4)
                {
                    c=1;
                }
            }

            else if(a[i][j]=='*' && c==0)
            {

                for()
            }
        }
    }





    return 0;
}
