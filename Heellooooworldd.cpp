#include<bits/stdc++.h>
using namespace std;
#define MAXSUM 100001
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int n,q;
    scanf("%d %d",&n,&q);
    //cin>>n>>q;
    long long int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
        //scanf("%d",arr[i]);

    bitset<MAXSUM> bit;
    bit.reset();
    bit[0]=1;
    for(int i=0;i<n;i++)
    {
        bit=bit | bit<<arr[i];
    }

    long long int dp[100005]={0};
    for(int i=0;i<MAXSUM;i++)
    {
        if(bit[i]==1)
            dp[i]=1;
    }

    for(int i=1;i<100005;i++)
        dp[i]+=dp[i-1];

    while(q--)
    {
        int a,b;
        //cin>>a>>b;
        scanf("%d %d",&a,&b);
        cout<<dp[b]-dp[a-1]<<endl;
    }

    return 0;
}
