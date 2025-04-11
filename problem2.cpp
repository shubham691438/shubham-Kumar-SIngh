#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a;
    cin>>a;

    for(int i=1,j=1;i<=a;i++,j+=2)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}