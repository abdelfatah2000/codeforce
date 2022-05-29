#include <iostream>
int main()
{
	int a, b, num = 0;
	std::cin >> a >> b;
	while (a <= b) {
		a *= 3,b*=2,num++;
	}
	std::cout << num;
}
