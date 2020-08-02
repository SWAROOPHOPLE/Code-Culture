#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        
        int maxfromleft[n]={0};
        int maxfromright[n]={0};
        int minarray[n]={0};
        int trappedwater=0;
        
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                maxfromleft[i]=arr[0];
            }
            else
            {
                maxfromleft[i]=max(maxfromleft[i-1],arr[i]);
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                maxfromright[i]=arr[n-1];
            }
            else
            {
                maxfromright[i]=max(maxfromright[i+1],arr[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            minarray[i]=min(maxfromleft[i],maxfromright[i]);
            trappedwater = trappedwater + (minarray[i]-arr[i]);
        }
        
        cout<<trappedwater<<endl;
        
        
    }
}
