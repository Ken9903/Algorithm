

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

	int e, s, m;

	ss >> e >> s >> m;

	long long year = 0;
	int e_m = 0, s_m = 0, m_m = 0;
	while (true)
	{
		if (e_m == e && s_m == s && m_m == m)
		{
			cout << year;
			return 0;
		}
		else
		{
			year++;
			e_m++;
			s_m++;
			m_m++;

			if (e_m > 15)
			{
				e_m = 1;
			}
			if (s_m > 28)
			{
				s_m = 1;
			}
			if (m_m > 19)
			{
				m_m = 1;
			}
		}
	}

	



}
