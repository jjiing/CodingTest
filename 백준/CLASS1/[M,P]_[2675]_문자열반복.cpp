#include <iostream>
#include <string>

using namespace std;
int main()
{
	int T,R;
	cin >> T;
	string S;
	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (int j = 0; j < S.length(); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << S[j];
			}

		}
		cout << endl;
	}
}

//문제주소
//https://www.acmicpc.net/problem/2675

//문제리뷰
//cout<<endl;을 빼먹어서 계속 틀렸다.꼼꼼히..!
