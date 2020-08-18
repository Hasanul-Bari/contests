#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int  main()
{
    vector <int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //cout<<v.size()<<endl;;

    vector <int> v2;

    int c=0;
    for(int i=0; i<v.size(); i++)
    {
        int c=0;
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
          v2.push_back(v[i]);
        }
    }

    cout<<v2.size()<<endl;

    for(int i=0; i<v2.size()-1; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<v2[v2.size()-1]<<endl;

    return 0;
}
