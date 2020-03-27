#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int x;
   x= str.find("W");
   while(x>=0&&x<str.size())
   {
       if(x==0)
       {

       }
       if(x==str.size())
       {

       }


         cout<<str[x-1]<< " "<<str[x+1]<<endl;
    cout<<x<<endl;
     x= str.find("W");
   }




}
