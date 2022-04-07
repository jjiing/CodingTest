#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> intVector; 
    for (int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        intVector.push_back(a);
    }
    int max = *max_element(intVector.begin(), intVector.end());
    cout <<  max << endl;

       for (int i = 0; i < 9; i++)
        {
            if (intVector[i] == max)
            {
                cout << i + 1 << endl;
            }
        }

}
