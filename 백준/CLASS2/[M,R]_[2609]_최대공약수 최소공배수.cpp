
#include <iostream>


using namespace std;

int gcd(int a, int b)				//최대공약수
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int lcm(int a, int b, int max)		//최소공배수
{
	return a * b / max;
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	cout << gcd(a, b) << endl << lcm(a, b, gcd(a, b)) << endl;

}



//문제리뷰
//처음엔 그냥 나눗셈을 이용해 직관적으로 풀이했는데 그럴경우 숫자가 커지면 반례값이 많이 등장한다.
//따라서 유클리드 호제법의 원리를 이용해 풀었다.
//블로그에 리뷰를 올려놨다.
