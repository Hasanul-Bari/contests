#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j,c=0;
    string s,a;
    cin>>n>>k>>a;
    s=a;


    for(i=0, j=s.length()-1; i<s.length()/2; i++,j--)
    {
        if(s[i]==s[j])
        {
           s.erase(i,1);
        }
    }
    cout<<s;

    if()
}
