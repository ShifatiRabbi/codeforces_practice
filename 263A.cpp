#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
    }
    cout<<abs(m-2)+abs(n-2)<<endl;
    return 0;
}
