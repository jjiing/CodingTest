#include <iostream>
#include <string>

using namespace std;

int main()
{
	string numA, numB;
	cin >> numA>> numB;

	char tempA = numA[0];
	numA[0] = numA[2];
	numA[2] = tempA;

	char tempB = numB[0];
	numB[0] = numB[2];
	numB[2] = tempB;

	int intA = stoi(numA);
	int intB = stoi(numB);

	if (numA > numB)
		cout << numA;
	else
		cout << numB;


}
