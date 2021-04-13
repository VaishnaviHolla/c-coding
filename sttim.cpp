#include<iostream>
using namespace std;
 //coversion of 12 hour clock to 24 hour clock
int main()
{
    char s[12]="12:12:00AM";
 int temp;
    if(s[8]=='A')
    {
       
        if(s[1]=='2')
    {
         s[0]='0';
        s[1]='0';
        cout<<s;
    }
    }
   else if(s[8]=='P')
    {
        if(s[0]=='0')
        {
            temp=((int)s[1]-48+12);
            s[1]=(temp%10)+48;
            s[0]=(temp/10)+48;
             cout<<s;
        }
        else
        {
          temp=((int)s[1]-48+10);
          s[1]=(temp%10)+48;
          s[0]=(temp/10)+48;
          cout<<s;
        }
    }
    else cout<<s;
    return 0;
}