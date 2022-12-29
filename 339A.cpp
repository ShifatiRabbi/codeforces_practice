#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int x = s.length();
    for(int i=x/2; i<x; i++)
    {
        if(i == x-1)
        {
            cout<<s[i]<<endl;
        }
        else
        {
            cout<<s[i]<<"+";
        }
    }

    return 0;
}
