#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	//N개의 수 입력받아 벡터에 저장하기
	int N;
	cin >> N;
	vector<float> score;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		score.push_back(num);
	}
	
	//최대값 m구하기
	int m = *max_element(score.begin(),score.end());
	
	//점수 재정의
	for (int i = 0; i < N; i++)
	{
		score[i] = score[i] / m * 100;
	}
	
	//평균 구하기
	float total=0;
	for (int i = 0; i < N; i++)
		total += score[i];
	float avr = total / N;
	cout << avr;

}
