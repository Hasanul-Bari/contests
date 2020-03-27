#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        if(n<=10)
            cout<<"Avenger "<<n<<" Rocks"<<endl;
        else
            cout<<"Avenger "<<n<<" Sucks"<<endl;
    }
    return 0;
}
