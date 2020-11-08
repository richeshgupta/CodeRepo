#include<iostream>
using namespace std;
int candidate(int a[],int n)
{
	int elem = a[0], c = 1;
	for(int i=1;i<n;i++)
	{
		if(elem==a[i])
			c++;
		else
			c--;
		
		if(c==0)
		{
			c = 1;
			elem = a[i];
		}
	}
	return elem;
}
int verify(int a[],int n)
{
	int cand = candidate(a,n);
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==cand)
			c++;
	}
	if(c>n/2)
		return cand;
	return NULL;
}
int main(void)
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int ans = verify(a,n);
	if(ans!=NULL)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<"NO MAJ elem\n";
	}
	return 0;
}