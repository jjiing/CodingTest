#include <iostream>

using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;
	int day = 0;

	day = (V - A) / (A - B) + 1;
	if ((V - A) % (A - B) != 0)
		day++;
	cout << day;
}
