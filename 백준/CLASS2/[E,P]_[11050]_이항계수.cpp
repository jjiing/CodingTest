#include <iostream>

using namespace std;
int Factorial(int num)
{
	int result = 1;
	for (int i = num; i >0; i--)
	{
		result *= num;
		num--;
	}
	return result;
}
int main()
{
	int N, K;
	cin >> N >> K;
	int ans = Factorial(N) / (Factorial(K) * Factorial(N - K));
	cout << ans;
}
