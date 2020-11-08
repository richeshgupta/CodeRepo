// Kadanes' algo
#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a[n];
	int ans=0,cur = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];

	}
	for (int i = 1; i < n; ++i)
	{
		if((a[i-1]%2==0 and a[i]%2==1)||(a[i-1]%2==1 and a[i]%2==0))
		{
			cur++;
			ans = max(cur,ans);
		}
		else
		{
			cur = 1;

		}
	}
	cout<<"max length odd eve subarray "<<ans<<endl;
}