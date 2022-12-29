#include<bits/stdc++.h>
using namespace std;

int to_lower(string s1, string s2)
{
    int cnt=0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i] = s1[i] + 32;
        }
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i] = s2[i] + 32;
        }

        if(s1[i] > s2[i])
        {
            cnt=1;
            return 1;
        }
        else if(s1[i] < s2[i])
        {
            cnt=1;
            return -1;
        }
    }
    if(cnt == 0)
        return 0;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n = to_lower(s1,s2);
    cout<<n<<endl;
    return 0;
}
