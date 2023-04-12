#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

struct index
{
	int h, n, m;
};



int arr[100][100][100];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.

	string size;
	getline(cin, size);

	istringstream ss(size);

	int m, n, h;
	ss >> m >> n >> h;


	fill_n(&arr[0][0][0], 1000000, -1);

	
	string input;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			getline(cin, input);
			istringstream ss_2(input);
			for (int z = 0; z < m; z++)
			{
				int temp;

				ss_2 >> temp;
				arr[i][j][z] = temp;
			}
		}
	}
	queue<index> myQueue;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < m; z++)
			{
				if (arr[i][j][z] == 1)
				{
					index *myIndex = new index; //해제 해줘야 하나?
					myIndex->h = i;
					myIndex->n = j;
					myIndex->m = z;

					myQueue.push(*myIndex);
				}
			}
		}
	}
	//cout << myQueue.size() << "입니다" << endl;

	queue<index> newQuere;
	int sum = 0;

	while (true)
	{
		int myQueueSize = myQueue.size();
		for (int i = 0; i < myQueueSize; i++)
		{
			index currentIndex;
			currentIndex = myQueue.front();

			//cout << "현재 팝할 인덱스는  " << currentIndex.h << currentIndex.n << currentIndex.m << "입니다" << endl;
			myQueue.pop();

			if (currentIndex.m > 0) //왼쪽
			{
				if (arr[currentIndex.h][currentIndex.n][currentIndex.m - 1] == 0)
				{
					arr[currentIndex.h][currentIndex.n][currentIndex.m - 1] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h;
					myIndex->n = currentIndex.n;
					myIndex->m = currentIndex.m - 1;
					newQuere.push(*myIndex);
					
				}
			}
			if (currentIndex.m < m - 1) //오른쪽
			{
				if (arr[currentIndex.h][currentIndex.n][currentIndex.m + 1] == 0)
				{
					arr[currentIndex.h][currentIndex.n][currentIndex.m + 1] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h;
					myIndex->n = currentIndex.n;
					myIndex->m = currentIndex.m + 1;
					newQuere.push(*myIndex);
					
				}
			}

			if (currentIndex.n > 0) //앞쪽
			{
				if (arr[currentIndex.h][currentIndex.n - 1][currentIndex.m] == 0)
				{
					arr[currentIndex.h][currentIndex.n - 1][currentIndex.m] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h;
					myIndex->n = currentIndex.n - 1;
					myIndex->m = currentIndex.m;
					newQuere.push(*myIndex);
					
				}
			}
			if (currentIndex.n < n - 1) //뒤쪽
			{
				if (arr[currentIndex.h][currentIndex.n + 1][currentIndex.m] == 0)
				{
					arr[currentIndex.h][currentIndex.n + 1][currentIndex.m] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h;
					myIndex->n = currentIndex.n + 1;
					myIndex->m = currentIndex.m;
					newQuere.push(*myIndex);
					
				}
			}

			if (currentIndex.h > 0) //위쪽
			{
				if (arr[currentIndex.h - 1][currentIndex.n][currentIndex.m] == 0)
				{
					arr[currentIndex.h - 1][currentIndex.n][currentIndex.m] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h - 1;
					myIndex->n = currentIndex.n;
					myIndex->m = currentIndex.m;
					newQuere.push(*myIndex);
					
				}
			}
			if (currentIndex.h < h - 1) //아래쪽
			{
				if (arr[currentIndex.h + 1][currentIndex.n][currentIndex.m] == 0)
				{
					arr[currentIndex.h + 1][currentIndex.n][currentIndex.m] = 1;
					index* myIndex = new index; //해제 해줘야 하나?
					myIndex->h = currentIndex.h + 1;
					myIndex->n = currentIndex.n;
					myIndex->m = currentIndex.m;
					newQuere.push(*myIndex);
					
				}
			}




		}
		//cout << newQuere.size();
		if (newQuere.empty())
		{
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < n; j++)
				{
					for (int z = 0; z < m; z++)
					{
						if (arr[i][j][z] == 0)
						{
							cout << -1; //-1로 둘러쌓여서 0이 변화하지 못함.
							return 0;
						}
					}
				}

			}
			cout << sum;
			return 0;
		}
		else
		{
			sum++;
		}
		myQueue = newQuere;
		newQuere = queue<index>();


	}
	










	/*
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < m; z++)
			{
				cout << arr[i][j][z] << " ";
			}
			cout << endl;
		}
	}
	*/



	








	
}