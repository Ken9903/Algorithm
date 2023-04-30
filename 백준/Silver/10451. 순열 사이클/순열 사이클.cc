#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

using namespace std;




int main()
{
	int t;
	cin >> t;

	


	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cin.ignore();

		vector<int> index_vec;
		vector<int> num_vec;
		vector<bool> check_vec;
		index_vec.emplace_back(0);
		check_vec.emplace_back(true);
		num_vec.emplace_back(0);

		string input;
		getline(cin, input);

		istringstream ss(input);
		for (int z = 1; z <= n; z++)
		{
			index_vec.emplace_back(z);
			check_vec.emplace_back(false);

			int temp;
			ss >> temp;
			num_vec.emplace_back(temp);
		}

		int result = 0;
		for (int z = 1; z <= n; z++) // 체크 안된 것 고르기
		{
			if (check_vec[z] == false) //아직 체크 X
			{
				result++;

				int start = z; // 초기 스타트 지점 이 곳으로 돌아오면 끝
				check_vec[z] = true;

				int current = num_vec[z];

				while (true)
				{
					check_vec[current] = true;
					if (current != start)
					{
						current = num_vec[current];
					}
					else
					{
						break;
					}
				}
			}

		}

		cout << result << '\n';





	}
	



}
