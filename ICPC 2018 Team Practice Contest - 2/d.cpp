
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
    for(int i=0;i<t;i++)
{
    string str;
    cin>>str;
int ck=0;

for(int i=0;str[i]!='\0';i++)
{
    if(str[i]!='A'||str[i]!='H'||str[i]!='I'||str[i]!='M'||str[i]!='O'||str[i]!='T'||str[i]!='U'||str[i]!='V'||str[i]!='W'||str[i]!='Y')
    {
        ck++;
        break;
    }
}
    //cout<<ck<<" "<<isPalindrome(str)<<endl;
if(ck>0||isPalindrome(str)==false)cout<<"no"<<endl;
else cout<<"yes"<<endl;
}

return 0;


}
