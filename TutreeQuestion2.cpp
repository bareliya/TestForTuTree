#include <bits/stdc++.h>
using namespace std;


void FindIndex(string ts, string ss)
{
	int n=ts.size();
    int m=ss.size();

	unordered_multiset<char> s1;
	unordered_multiset<char> s2;


	for (int i = 0; i < m; i++)
		s2.insert(ss[i]);

	for (int i = 0; i < n; i++)
	{

		if (i < m)
			s1.insert(ts[i]);

		else
		{

			if (s1 == s2)
			{
				cout << "substring" << ts.substr(i - m, m) <<
					" present at index " << i - m << '\n';
			}


			auto itr = s1.find(ts[i - m]);
			if (itr != s1.end())
				s1.erase(itr);

			s1.insert(ts[i]);
		}
	}

	if (s1 == s2)
	{
		cout << "substring " << ts.substr(n - m, m) <<
			" present at index " << n - m << '\n';
	}
}

int main()
{
	string targetstring;
	string smallerstring;
	cout<<"enter the target string"<<endl;
	cin>>targetstring;
	cout<<"enter smaller string"<<endl;
	cin>>smallerstring;





	FindIndex(targetstring,smallerstring);

	return 0;
}
