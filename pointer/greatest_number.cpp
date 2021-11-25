#include<iostream>
using namespace std;
int main()
{
    int a[1000],n,i,max;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
    max=a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<max;
    return 0;

}