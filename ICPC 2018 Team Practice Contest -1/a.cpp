#include<bits/stdc++.h>
using namespace std;

int decToBinary(long long n)
{
int ck=0;
    int r;

    long long i = 0;
    while (n > 0) {


       r= n % 2;
        if(r==1)ck++;
        n = n / 2;
        i++;
    }

return ck;

}
int main()
{
        int t;
    cin>>t;
    for(int i=0;i<t;i++){
            long long n,m;
    cin>>n;

    m=n-1;

    int x=n^m;

    cout<< decToBinary(x)<<endl;

    }


    return 0;
}
