#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool Compare(string aString,string bString)
{
	if (aString.length() != bString.length())
		return aString.length() < bString.length();	//길이가 다르다면 길이순 정렬
	else
		return aString < bString;	//길이가 같다면 사전순 정렬
		
}
int main()
{
	int N;
	cin >> N;
	vector<string> words;

	//입력
	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;
		words.push_back(word);
	}


	//compare : 원하는대로 처리해 정렬할 사용자 지정 함수
	sort(words.begin(), words.end(), Compare);	


	//같으면 출력하지 않고 넘어가는 함수
	//아래 i-1연산을 위해 0번째는 따로 출력해주고 i=1부터 for문을 돌린다.
	cout << words[0]<<endl;		
	for (int i = 1; i < N; i++)
	{
		if (words[i] == words[i - 1])
			continue; //루프의 몸체 끝으로 점프한다. (해당 경우 코드를 실행하지 않고 넘어간다)
		
		cout << words[i] << endl;
	}
	
		

}
