 #include <bits/stdc++.h>
  using namespace std;
  /*int read()
  {
      int x=0,f=1;char ch=getchar();
      while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
      while (ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
      return x*f;
  }*/

 int main()
{
    int T,L,A;
    double ans;
    int t;
     while (T--)
     {
         int l,a;
         cin>>l>>a;
       ans=(double)a/360*l*l*3.1416;
         ans-=(double)0.5*L*L*sin((double)A/180*3.1416);
         printf("%.6lf\n",ans);
     }     return 0;

}
