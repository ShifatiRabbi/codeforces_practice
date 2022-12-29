#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int cnt=1,x=0;
    for(int i=0; i<s.length()-1; i++)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if(s[i] == s[j])
            {
                x++;
            }
            else
            {
                i = i + x;
                x = 0;
                cnt++;
                break;
            }
        }
    }
    if(cnt%2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}

