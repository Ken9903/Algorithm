

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string num;
	int main_num;

	getline(cin, num);

	istringstream ss(num);

	ss >> num >> main_num;





	int sum = 0;



	for (int i = 0; i < num.length(); i++)
	{
		int multiple = 1;
		for (int j = num.length() - 1; j > i; j--)
		{	
			multiple *= main_num;
		}

		if ((int)num[i] - 48 < 10)
		{
			sum += multiple * ((int)num[i] - 48);		

		}
		else {
			sum += multiple * (num[i] - 55);
		}
		

	}

	cout << sum;

}
