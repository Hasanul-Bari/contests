#include<iostream>
using namespace std;

int main()
{
    char num;
    int i;

    cout<<(-7)%3<<endl;

    //char c=501;
    //c=c+1;
    //printf("%d\n",c);

    for( i=0,num = 0; i < 500; i++,num++)
    {
        num = (num + 1)%260;
        printf("%d\n", num);
    }

    printf("%d\n", num);
}




