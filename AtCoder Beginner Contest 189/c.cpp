#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int getMax(int a[],int n)
{


        int mx = 0;
        int h = 0;
        int x = 0;
        stack<int> st;
        st.push(-1);

        for(int i=0; i<n; i++)
        {
            while(st.top() != -1 && !(a[i] > a[st.top()]))
            {
                h = a[st.top()];
                st.pop();
                x = h*(i-st.top()-1);

                if(mx<x)
                    mx=x;
            }
            st.push(i);
        }

        while(st.top() != -1)
        {
            h = a[st.top()];
            st.pop();
            x = h*(n-st.top()-1);

            if(mx<x)
                mx=x;
        }

        return mx;

}


int main()
{
    faster

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<getMax(a,n)<<endl;



    return 0;
}
