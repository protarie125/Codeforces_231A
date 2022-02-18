#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto count = int{ 0 };
	for (int i = 0; i < n; ++i) {
		auto s = int{ 0 };
		for (int j = 0; j < 3; ++j) {
			int x;
			cin >> x;

			s += x;
		}

		if (2 <= s) {
			count += 1;
		}
	}

	cout << count;

	return 0;
}