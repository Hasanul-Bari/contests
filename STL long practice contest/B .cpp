#include<iostream>
#include<vector>
#include<cstdio>
#include<utility>

using namespace std;

int main()
{
    vector <int> v;
    vector <int> :: iterator it;

    int x;
    while(cin>>x && x!=EOF)
    {
        v.push_back(x);
    }

    pair <int,int> m;

    for(int i=0; i<v.size(); i++)
    {
        int c=1;
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                //cout<<v[i]<<"~"<<v[j]<<endl;
                c++;
                v.erase(v.begin()+j);
                //break;
            }
        }


        cout<<v[i]<<" "<<c<<endl;
        //c=0;


}

}
