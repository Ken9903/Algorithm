

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, m;

	ss >> n >> m;

	vector<int> a;
	vector<int> b;


	string aInput;
	getline(cin, aInput);

	string bInput;
	getline(cin, bInput);

	istringstream ss_a(aInput);
	for (int i = 0; i < n; i++)
	{

		int temp;
		ss_a >> temp;

		a.push_back(temp);
	}
	istringstream ss_b(bInput);
	for (int i = 0; i < m; i++)
	{

		int temp;
		ss_b >> temp;

		b.push_back(temp);
	}


	 vector<int> uni(a.size() + b.size());
	 vector<int>::iterator iter;
     iter = merge(a.begin(), a.begin() + a.size(), b.begin(), b.begin() + b.size(), uni.begin());
	 uni.resize(iter - uni.begin());

	
	for (int i = 0; i < uni.size(); i++)
	{
		cout << uni[i] << " ";
	}
	



}
