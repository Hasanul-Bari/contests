#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int x=1,ans;
    while(1)
    {

        if((x/k)*(x%k)==n)
        {
            ans=x;
            break;
        }
        x++;
    }
    cout<<ans<<endl;
}
