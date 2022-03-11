#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int jacket, sock, money;
	cin >> jacket >> sock >> money;
	money -= jacket; // subtract the jacket cost
	money /= sock; // divide (for each of socks)
	cout << (money % 2 == 0 ? "Lucky" : "Unlucky") << " Chef\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

