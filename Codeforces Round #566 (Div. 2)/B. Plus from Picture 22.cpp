#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
{
    faster
    int h,w;
    cin>>h>>w;

    char a[h][w];

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>a[i][j];
        }
    }



    int c=0,hp=0,cc=0,hpp=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            if(a[i][j]=='*' && c==0)
            {
                a[i][j]='.';
                if(j-1<0)
                    hp=1;
                if(j+1>=w)
                    hp=1;
                if(i+2>=h)
                    hp=1;
                else if(a[i+1][j]!='*')
                    hp=1;
                else if(a[i+2][j]!='*')
                    hp=1;



                for(int k=i+1; k<h; k++)
                {
                    if(a[k][j]=='*')
                    {
                        if(hp==0 && a[k][j-1]=='*' && a[k][j+1]=='*' && cc==0)
                        {
                            for(int l=j-1; l>=0; l--)
                            {
                                if(a[k][l]=='*')
                                    a[k][l]='.';
                                else
                                    break;
                            }

                            for(int r=j+1; r<w; r++)
                            {
                                if(a[k][r]=='*')
                                    a[k][r]='.';
                                else
                                    break;
                            }
                            if(k+1<h && a[k+1][j]=='*')
                                hpp=1;

                            cc=1;
                        }
                        a[k][j]='.';
                    }
                    else
                    {
                        break;
                    }
                }

                c=1;
            }
            if(c==1)
                break;

        }
        if(c==1)
            break;
    }

    /*for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }*/





    if(hp==1)
        cout<<"NO"<<endl;
    else if(c==0)
        cout<<"NO"<<endl;
    else if(cc==0)
        cout<<"NO"<<endl;
    else if(hpp==0)
        cout<<"NO"<<endl;
    else
    {

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(a[i][j]=='*')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

        }
        cout<<"YES"<<endl;
    }








    return 0;
}

