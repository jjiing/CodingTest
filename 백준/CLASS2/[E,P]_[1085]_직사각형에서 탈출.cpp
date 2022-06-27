#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int main() {
	float dis[4];
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	dis[0] = pow(y,2);
	dis[1] = pow(x, 2);
	dis[2] = pow((w-x), 2);
	dis[3] = pow((h-y), 2);
	int maxDis = *min_element(dis, dis+4);
	cout << sqrt(maxDis)<<endl;
	
}
