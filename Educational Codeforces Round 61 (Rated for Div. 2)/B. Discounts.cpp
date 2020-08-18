#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   long long a[n],s=0;
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
       s=s+a[i];
   }
   sort(a,a+n, greater<int>());
   /*for(int i=0; i<n; i++)
   {
      cout<<a[i]<<" ";
   }
   cout<<endl;*/


   long long m,x;
   cin>>m;
   for(int i=0; i<m; i++)
   {
       cin>>x;
       cout<<s-a[x-1]<<endl;

   }



    return 0;




}

