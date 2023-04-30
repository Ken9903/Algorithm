// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;



int graphArr[1001][1001] = { 0 };
bool checked[1001] = { false };

vector<int> stack;
queue<int> myQueue;

void DFS(int input, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (graphArr[input][i] != 0 && checked[i] == false)
		{
			checked[i] = true;

			cout << i << " ";
			DFS(i, count);
		}

	}

}

void BFS(int input, int count)
{
	
	for (int i = 0; i < count; i++)
	{
		if (graphArr[input][i] != 0 && checked[i] != true)
		{
			checked[i] = true;
			myQueue.push(i);
			cout << i  << " ";
		}
		
	}
	if (!myQueue.empty())
	{
		int temp = myQueue.front();
		myQueue.pop();

		BFS(temp, count);
	}
	

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.


	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, m, v;


	ss >> n >> m >> v;


	for (int i = 0; i < m; i++)
	{
		string inputEdge;
		getline(cin, inputEdge);

		istringstream ss_2(inputEdge);

		int start, end;

		ss_2 >> start >> end;

		graphArr[start][end] = 1;
		graphArr[end][start] = 1;
	}


	cout << v << " ";
	checked[v] = true;
	DFS(v, n + 1);

	cout << "\n";

	cout << v << " ";
	fill_n(checked, 1001, false);
	checked[v] = true;
	BFS(v, n + 1);


	

}






