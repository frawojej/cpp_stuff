#include <iostream>

int main() {
	// std::cout << "cos";
	int a = 0;

	start:

	if (a == 100){
		goto end;
	}
	a++;

	std::cout << a << "\n";
	goto start;
	
	
	end:



	return 0;
}