#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a[n];
	int tot_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		tot_sum+=a[i];
	}

	// Normal Kadane's
		int max_end = a[0],res = a[0];
		for(int i=1;i<n;i++)
		{
			max_end = max(max_end+a[i],a[i]);
			res = max(max_end,res);
		}

	// Min Kadane
	int min_end = a[0],res2 = a[0];
		for(int i=1;i<n;i++)
		{
			min_end = min(min_end+a[i],a[i]);
			res2 = min(min_end,res2);
		}		
		// cout<<"min : "<<res2<<" max : "<<res<<endl;
		cout<<max(tot_sum-res2,res)<<endl;
		return 0;
}