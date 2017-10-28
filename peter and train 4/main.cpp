#include<iostream>
#include<algorithm>

using namespace std;

bool go(string s,string a,string b)
{
	int index=-1;
	for(int i=0;i<s.size();i++)
	{
		int j=0;
		while(j<a.size() and i+j<s.size() and s[i+j]==a[j])
			j++;
		if(j==a.size())
		{
			index=i+j;
			break;
		}
	}
	if(index==-1)
		return 0;
	int dd=index;
	index=-1;
	for(int i=dd;i<s.size();i++)
	{
		int j=0;
		while(j<b.size() and i+j<s.size() and s[i+j]==b[j])
			j++;
		if(j==b.size())
			return 1;
	}
	return 0;
}

int main()
{
	string s,a,b;
	cin>>s>>a>>b;
	bool forw=go(s,a,b);
	reverse(s.begin(),s.end());
	bool back=go(s,a,b);
	if(forw)
		if(back)
			cout<<"both";
		else
			cout<<"forward";
	else
		if(back)
			cout<<"backward";
		else
			cout<<"fantasy";
	cout<<endl;
}

