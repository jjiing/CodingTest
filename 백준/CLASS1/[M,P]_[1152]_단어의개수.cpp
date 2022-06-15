#include <iostream>
#include <string>
using namespace std;

int main()
{
	string temp;
	getline(cin, temp);
	int count=1;
	
	for (int i = 0; i < temp.length(); i++)
	{
		if (temp[i] == ' ')
			count++;
	}
	if (temp[0] == ' ' )
		count--;
	if (temp[temp.length() - 1]==' ')
		count--;
	cout << count;

}

//getline : 공백도 포함하는 문자열 받기 #include <iostream> 해줘야함
//처음과 끝이 0인경우 고려
