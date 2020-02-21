/*Given a base-10 integer, n, convert it to binary (base-2). 
Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,sum=0,check,i,len=0;
    cin>>n;
    check=n;
    while(check!='\0')
    {
        check=check/2;
        len++;
    }
    i=len-1;
    int a[i];
    while(n!=0)
    {
        
        a[i]=n%2;
        n=n/2;
        i--;
    }
    /*for(int j=0;j<len;j++)
    {
        cout<<a[j];
    }*/
    int flag=0,big=0,count=0;
    i=0;
        while(i<len)
        {
            if(a[i]==1)
            {
                count++;
                
            }
            else
            {
                flag=count;
            count=0;
            }
            if(count>big)
            big=count;
            
            i++;
        }
        cout<<big;
    return 0;
}
