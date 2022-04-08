#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int> vectorNum;
	for (int i = 0; i < num; i++)
	{
		int a;
		cin >> a;
		vectorNum.push_back(a);
	}

	cout << *min_element(vectorNum.begin(), vectorNum.end());
	cout << " "<< * max_element(vectorNum.begin(), vectorNum.end());
}

//문제리뷰
//벡터 내의 최소값, 최대값 구하기
//algorithm라이브러리 내 함수 활용
//*max_element(vector.begin(),vector.end());
