#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int cards[100];
	vector<int> sum;
	for (int i = 0; i < N; i++)
	{
		cin >> cards[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int num = cards[i] + cards[j] + cards[k];
				if(num<=M)
					sum.push_back(M-num);
			}
		}
	}
	int min = *min_element(sum.begin(), sum.end());
	cout << M - min;
	
}
