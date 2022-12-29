#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n=0,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b+c>1)
        {
            n++;
        }
    }
    cout<<n<<endl;
    return 0;
}


