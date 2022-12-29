#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s == "X++" || s == "++X")
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}

