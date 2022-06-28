#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int K;
	cin >> K;
	vector<int> num;
	for (int i = 0; i < K; i++)
	{
		int a;
		cin >> a;
		num.push_back(a);
		if (a == 0)
		{
			num.pop_back();
			num.pop_back();
		}
	}
	int result=0;

	for (int i = 0; i < num.size(); i++)
		result += num[i];

	cout << result;

}
