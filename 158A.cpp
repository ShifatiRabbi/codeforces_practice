#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c=0;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] >= arr[t-1] && arr[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
