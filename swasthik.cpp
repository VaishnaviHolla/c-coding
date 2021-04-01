#include <iostream>
using namespace std;
int main() 
{
    int i,j,n,check;
    cin>>n;
	// your code goes here
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	{
        check=((i==n/2)||(j==n/2))||((i==0)&&(j>n/2))||((j==0)&&(i<n/2))||((i==(n-1))&&(j<n/2))||((j==(n-1))&&(i>n/2));
	   if(check)
       cout<<"*";
	   else 
	   cout<<" ";  
	} 
		     cout<<"\n";
	}
	return 0;
}
