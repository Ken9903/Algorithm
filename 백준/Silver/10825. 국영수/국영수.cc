#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct student
{
	string name;
	int kor;
	int eng;
	int math;
};

bool compare(student st1, student st2)
{
	if (st1.kor != st2.kor)
	{
		return st1.kor > st2.kor;
	}
	else
	{
		if (st1.eng != st2.eng)
		{
			return st1.eng < st2.eng;
		}
		else
		{
			if (st1.math != st2.math)
			{
				return st1.math > st2.math;
			}
			else
			{
				return st1.name < st2.name;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	vector<student> student_vec;

	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);
		istringstream ss(input);
		
		student temp;

		ss >> temp.name >> temp.kor >> temp.eng >> temp.math;
		student_vec.emplace_back(temp);
	}

	sort(student_vec.begin(), student_vec.end(), compare);

	for (int i = 0; i < n ; i++)
	{
		cout << student_vec[i].name<< "\n";
	}

	



}
