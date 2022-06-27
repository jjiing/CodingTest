#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num[10];
	int index[42] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		num[i] = num[i] % 42;
		index[num[i]]++;
	}
	int count = 0;
	
	for (int i = 0; i < 42; i++)
	{
		if (index[i] > 0)
			count++;
	}
	
	cout << count;
}
