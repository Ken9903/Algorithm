// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.


	string input;
	getline(cin, input);

	istringstream ss(input);

	int a, b, c;


	ss >> a >> b >> c;

	cout << (a + b) % c << "\n";
	cout << ((a%c) + (b%c)) % c << "\n";
	cout << (a*b)%c << "\n";
	cout << ((a%c) * (b%c)) % c << "\n";



}




