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
void juggle(int a[],int n,int d)
{
	int sets = __gcd(n,d);
	int j;
	for (int i = 0; i < sets; ++i)
	{	
		int temp = a[i];
		int j=i;
		while(1)
		{
			int r = (d+j)%n;

			if(r==i)	
				break;

			a[j] = a[r];
			j = r;
			
		}
		a[j] = temp;
		
	}
}
int32_t main()
{
    always();
 	// Juggling Algorithm
    // Array Rotation by D
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    juggle(a,12,3);
    for (int i = 0; i < 12; ++i)
    {
    	cout<<a[i]<<" ";
    }
    return 0;
}