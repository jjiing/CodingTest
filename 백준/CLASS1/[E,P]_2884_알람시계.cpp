#include <iostream>

using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;
	
	if (M >= 45)
		M = M - 45;
	else if (M < 45 && H != 0)
	{
		H--;
		M = 15 + M;
	}
	else if (M < 45 && H == 0)
	{
		H = 23;
		M = 15 + M;
	}
	cout << H << " " << M;
}
