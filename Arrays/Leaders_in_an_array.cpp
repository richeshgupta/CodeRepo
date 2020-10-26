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
 void leader(int a[],int n)
 {
 	int curr_lead = a[n-1];
 	cout<<curr_lead<<" ";
 	for (int i = n-2; i >=0; --i)
 	{
 		if(curr_lead<a[i])
 		{
 			curr_lead = a[i];
 			cout<<curr_lead<<" ";
 		}
 	}
 }
int32_t main()
{
    always();
 	int a[7]={7,10,4,3,6,5,2};
 	leader(a,7);

    return 0;
}