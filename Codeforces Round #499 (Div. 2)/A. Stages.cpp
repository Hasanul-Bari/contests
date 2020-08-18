#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    char s[50];

    cin>>s;
    for(int i=1; i<n; i++)
        for(int j=0; j<n-i; j++)
            if(s[j+1]<s[j])
                swap(s[j+1],s[j]);


    int w=0;
    for(int i=0;i<n;i++)
    {
        int j=1,c=1;
        if(s[i]-s[i+j]>=1)
        {
            w=w+s[i]-96;

            if(c==k)
            {
                w=w+s[i+j]-96;
                break;
            }
            c++;

        }
    }

    cout<<w<<endl;




}
