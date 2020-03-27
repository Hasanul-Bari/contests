#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
using namespace std;

class stu
{
 public:
    int roll,mark;
    string nam;
};

bool comparator(stu a1,stu a2)
{
    if(a1.mark==a2.mark)
        return a1.roll<a2.roll;
    else
        return a1.mark>a2.mark;
}




int main()
{
    faster

    int n;
    cin>>n;

    stu s[n];




    for(int i=0; i<n; i++)
    {
        cin>>s.roll>>s.nam>>s.mark;
    }

    sort(s,s+n,comparator);


    for(int i=0; i<n; i++)
    {
        cout<<" "<<s.roll<<" "<<s.nam<<" "<<s.mark;
    }









    return 0;
}
