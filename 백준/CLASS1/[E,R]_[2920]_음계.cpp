#include <iostream>


using namespace std;
int main()
{
	int play[8];
	int asc = 0;
	int des = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> play[i];

		if (play[i] == i + 1)
			asc++;
		else if (play[i] == 8 - i)
			des++;
	}
	if (asc == 8)
		cout << "ascending" << endl;
	else if (des == 8)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;
}

//문제리뷰
//문제 내용이 어렵진 않지만
//play[i] == i + 1를 비교하는 풀이 방법을 생각을 거의 못해내서 
//다시 풀어볼 것
