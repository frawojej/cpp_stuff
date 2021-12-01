#include <iostream>

int NWD (int a, int b)  {
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	return a;
}

int main() {
	int a, b;
	std::cout << ": ";
	std::cin >> a >> b;
	std::cout << NWD(a, b) << "\n";
	return 0;
}