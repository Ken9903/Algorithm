// Project8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

struct Node
{
	int num;
	Node* next = NULL;
	Node* before = NULL;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, k;

	ss >> n >> k;

	vector<Node> nodeVec;
	vector<int> out;


	for (int i = 1; i <= n; i++)
	{
		Node* node = new Node;
		node->num = i;

		nodeVec.push_back(*node);
	}

	for (int i = 0; i < n - 1; i++)
	{
		nodeVec[i].next = &nodeVec[i + 1];
	}
	for (int i = 1; i < n; i++)
	{
		nodeVec[i].before = &nodeVec[i - 1];
	}
	nodeVec[nodeVec.size() - 1].next = &nodeVec[0];
	nodeVec[0].before = &nodeVec[nodeVec.size() - 1];

	Node node;
	node = nodeVec[k - 1];
	while (true)
	{

			out.push_back(node.num);
			node.before->next = node.next;
			node.next->before = node.before;		

			Node kNode = node;
			for (int i = 0; i < k; i++)
			{
				kNode = *kNode.next;
			}
			node = kNode;

			if (out.size() == nodeVec.size())
			{
				break;
			}
		
	}
	
	cout << "<";
	for (int i = 0; i < n - 1; i++)
	{
		cout << out[i] << ", ";
	}
	cout << out[n - 1];
	cout << ">";




}
