#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{

    int l = 0;
    int h = str.size()-1;


    while (h > l)
    {
        if (str[l++] != str[h--])
        {

            return false;
        }
    }
    return true;

}

int main()
{
    int t;
    cin>>t;

    for(int h=0; h<t; h++){

    string str;
    cin>>str;



    bool ck=true;
    for(int i=0;str[i]!='\0';i++)
    {
    if(str[i]!='A'&& str[i]!='H'&& str[i]!='I'&& str[i]!='M' && str[i]!='O' && str[i]!='T' &&str[i]!='U'&&str[i]!='V'&&str[i]!='W'&&str[i]!='X'&&str[i]!='Y')
         {
             ck=false;
             break;
         }
    }
    //cout<<ck<<" "<<isPalindrome(str)<<endl;
if(ck==true&&isPalindrome(str)==true)cout<<"yes"<<endl;
else cout<<"no"<<endl;}
return 0;


}
