#include <iostream>

using namespace std;

int main() 
{
	int n;
	string num;
	cin >> n>> num;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += num[i] - 48;		//ch가 아스키코드이기 때문에 48('0')을 빼줘서 숫자로 데이터 타입을 변환시킴
	}
	cout << sum;

	
}

//문제 주소
//https://www.acmicpc.net/problem/11720
//문제 리뷰 
//나눗셈으로 풀이해보려 했는데, 해당 방법으로는 int형이 담을 수 있는 크기의 한계로 풀이하지 못한다. (예제문제 입력 안됨)
//따라서 문자형으로 받아 아스키코드를 활용해 풀어야 하는데,
//본인은 i번째 문자의 출력을 조금더 쉽게 하기 위해 문자열로 받아서 풀이했다.
