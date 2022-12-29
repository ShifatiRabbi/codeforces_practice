#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

solve(ll arr[],ll n,ll target)
{
    ll odd=0,even=0;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x = target-arr[i];
        sum+=x;
        even+=x/2;
        odd+=x%2;
    }
    ll ans = sum/3 * 2;
    ans+=sum%3;
    return max(odd*2-1,ans);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+3];
        ll mx=-1;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        ll ans = min(solve(arr,n,mx),solve(arr,n,mx+1));
        cout<<ans<<endl;
    }
}

