#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	while(!(cin >> a >> b).eof())
	{
		cout << a + b << endl;
	}

}

//문제주소   
//https://www.acmicpc.net/problem/10951   
//문제리뷰
//테스트 케이스의 수를 지정해주지 않았다는게 문제의 핵심이다.
//while(!(cin >> a >> b).eof())와 같이 eof() (end of file)을 사용하여 문제를 풀어준다.
