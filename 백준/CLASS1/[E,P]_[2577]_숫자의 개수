#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	string result = to_string( A * B * C);
	
	string num = "0123456789";

	

	int count[10];
	for (int i = 0; i < 10; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < num.length(); i++)
	{
		while (result.find(num[i]) !=string::npos)
		{
			count[i]++;
			result = result.substr(result.find(num[i]) + 1);
		}
		result = to_string(A * B * C);
		
		cout << count[i] << endl;
	}
	
}
