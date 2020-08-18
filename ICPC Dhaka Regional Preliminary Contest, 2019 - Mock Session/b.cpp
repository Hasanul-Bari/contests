#include<bits/stdc++.h>
using namespace std;
#define mx 1000
int r,c,x,y;
int m,n;

int f[mx] ;
int ff[mx] ;

struct node
{
    int a;
    string s;
    int b;
    node(){}
    node(int aa,string bb,int cc)
    {
        a=aa;
        s=bb;
        b=cc;
    }
};
bool cmp(node A,node B)
{
    if(A.b==B.b){
        return A.a<B.a;
    }
    return A.b>B.b;
}
node a[100009];
int main()
{
   int x,y;
   string s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>s>>y;
        a[i]=node(x,s,y);
    }
    sort(a,a+t,cmp);
    cout<<"Roll | Name       | Marks"<<endl;
    string str="Roll | Name       | Marks";
    for(int j=0;j<str.size();j++) cout<<"-";
        cout<<endl;
    for(int i=0;i<t;i++){
        cout<<setw(4)<<a[i].a<<" | ";

        cout<<a[i].s;
        int x=a[i].s.size();
        for(int j=0;j<10-x;j++) cout<<" ";
        cout<<" | "<<a[i].b<<endl;
    }
}
