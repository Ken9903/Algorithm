// Project20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	
	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);

		input[0] = toupper(input[0]);

		cout << input << '\n';

	}
}

