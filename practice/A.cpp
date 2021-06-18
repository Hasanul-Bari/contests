#include<bits/stdc++.h>
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
const double PI = acos(-1.0);
using namespace std;

int main()
{
    //faster

    int t,k=1;

    cin>>t;

    int d,m,y,yy;
    map<char, char> mp;
    mp[')'] = '(';
    mp['}'] = '{';
    mp['>'] = '<';
    mp[']'] = '[';
    for(int tc = 1; tc <= t; tc++)
    {
        string s; cin>>s;
        int sz = s.size();
        int pos[sz] = {0};
        stack<int> stk;

        for(int i = 0; s[i]; i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '[' || ch == '<'){
                stk.push(i);
            }
            else if(stk.size()){
                char top = s[stk.top()];
                //cout<<stk.top()<<'\n';
                //cout<<ch<<" "<<mp[ch]<<'\n';

                if(mp[ch] == top){
                    pos[stk.top()] = i - stk.top() + 1;
                    //cout<<"YES ";
                    stk.pop();
                }
                else{
                    while(stk.size()) stk.pop();
                }
            }
        }
        printf("Case %d:\n", tc);
        for(int i = 0; i < sz; i++) {
            cout<<pos[i]<<'\n';
        }

    }






    return 0;
}
