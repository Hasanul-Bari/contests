#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
            cout<<"FunkyMonkeys"<<endl;
        else
            cout<<"WeWillEatYou"<<endl;
    }

    return 0;
}
