#include<iostream>
#include<map>
#include<cstdio>

using namespace std;

int main()
{
    map <string,string> m;
    map <string,string> :: iterator it;

    int n,x;
    cin>>n;
    getchar();

    for(int i=0; i<n; i++)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);

        m.insert(make_pair(a,b));
    }



    cin>>x;
    getchar();

    for(int j=0; j<x; j++)
    {
        string c;
        getline(cin,c);

        for(it=m.begin(); it!=m.end(); it++)
        {
            if(it->first==c)
            {
                cout<<it->second<<endl;
            }
        }

    }

    return 0;


}
