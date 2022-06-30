#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	
	vector<string> words;
	bool result = true;
	while (1)
	{
		string word;
		cin >> word;
		if (word == "0") break;
		words.push_back(word);
	}
	for(int i = 0 ; i<words.size();i++)
	{
		result = true; //초기화
		for (int j = 0; j < words[i].size() / 2; j++)
		{
			if (words[i][j] != words[i][words[i].size() - 1 - j])
				result = false;
			
		}

		if (result) cout << "yes"<<endl;
		else cout << "no" << endl;
	}
	
}
