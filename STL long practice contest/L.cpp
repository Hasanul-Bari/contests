#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map <string,string> m;
    map <string,string> :: iterator it;
    map <string,string> :: reverse_iterator rit;


    for(int i=0; i<n; i++)
    {
        string name,d,mm,y,s;

        cin>>name>>d>>mm>>y;

        if(d.length()==1)
            d="0"+d;


        if(mm.length()==1)
            mm="0"+mm;

        s=y+mm+d;

        //cout<<s<<endl;

        m.insert(make_pair(s,name));

    }

    rit=m.rbegin();
    cout<<rit->second<<endl;


    it=m.begin();
    cout<<it->second<<endl;

    return 0;

}
