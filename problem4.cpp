#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(a[i] % j ==0)
            {
                cnt[j]++;
            }
        }
    }

    for(int i=1;i<=9;i++)
    {
        cout<<i<<" "<<cnt[i]<<endl;
    }
    return 0;
}