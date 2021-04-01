#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    int  i=0,a[10];char temp; char s[10];
    gets(s);
    i=1;
    while(i<strlen(s))
    {
       temp=s[i];s[i]=s[i+1]; s[i+1]=temp; i=i+2;   
    }
    cout<<endl<<s;
    i=1;
    for(i=0;i<strlen(s);i=i+2)
         a[i]=(int)s[i]-48;
    i=1;
 while(i<strlen(s))
    {
        switch(s[i])
        {
            case '+':a[i]= a[i-1]+a[i+1];break;
            case '-':a[i]=a[i-1]-a[i+1];break;
            case '*':a[i]= (a[i-1])*(a[i+1]);break;
            case '/':a[i]=(a[i-1])/(a[i+1]);break;      
        } i=i+2;
    }
    cout<<endl<<(int)a[i-2];
    return 0;  
}
