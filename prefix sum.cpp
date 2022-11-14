#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n + 1];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int preSum[n + 1];
    preSum[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }


    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        if(l == 0) cout<<preSum[r]<<endl;
        else cout<<preSum[r] - preSum[l - 1]<<endl;
    }
    return 0;
}
