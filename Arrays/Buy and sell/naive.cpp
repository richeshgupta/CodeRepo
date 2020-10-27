#include<bits/stdc++.h>
using namespace std;
 
#define w(testCase)  int testCase; cin>>testCase; while(testCase--)
#define mod   1000000007
#define inf   1e18
#define pb push_back
#define eb emplace_back
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define mp make_pair
 
int gcd(int a,int b)
{
    if(b==0)
        return a;
 
    return gcd(b,a%b);
}
void always()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt", "r", stdin);
    //     freopen("out.txt", "w", stdout);
    // #endif
 
}
 
int maxProfit(int prices[],int start,int end)
{
	int prof = 0;
	if(end<=start)
		return 0;

	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<end;j++)
		{
			if(prices[j]>prices[i])
			{
				int cur_prof = prices[j] - prices[i] + maxProfit(prices,start,i-1) + maxProfit(prices,j+1,end);
				prof = max(cur_prof,prof);

			}
		}
	}
	return prof;
}
int32_t main()
{
    always();
       int a[]={1,5,3,8,12};
       cout<<maxProfit(a,0,5);  
    return 0;
}