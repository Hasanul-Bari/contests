#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string n);
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}


string toBinary(unsigned int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main()
{
    unsigned int n,t;
    string bin;
    cin>>t;
    while(t--){
    cin>>n;
   bin= toBinary(n);
  // cout<<bin<<endl;
  int len=bin.length();
 // cout<<len<<endl;
  // int dec= binaryToDecimal(bin);
    //cout<<dec;
 //  // cout<<bin<<endl;
  // int num=stoi(bin);
  // cout<<num;



  for(int i=0;i<len;i++){

int num= bin[i]-'0';
    if(num==1){

        bin[i]=0;
        break;


    }

  }


int x=binaryToDecimal(bin);

cout<<x<<endl;



    }


}
