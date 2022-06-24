#include <iostream>
#include <string>
using namespace std;
int main()
{


	int count[26] = { 0 };
	string word;
	cin >> word;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] < 97)	//대문자면 65를 빼고
			word[i] -= 65;
		else				//소문자면 97을 뺌
			word[i] -= 97;

		count[word[i]]++;

	}


	int maxIndex = 0;
	int maxNum = 0;
	bool overlap = false;

	for (int i = 0; i < 26; i++)
	{
		if (maxNum < count[i])
		{
			maxNum = count[i];
			maxIndex = i;
			overlap = false;
		}
		else if (count[maxIndex] == count[i])
			overlap = true;
	}


	if (overlap)
		cout << "?";
	else
		cout << char(maxIndex + 65);


}
