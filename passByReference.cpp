#include <iostream>
using namespace std;

int fun(int &x) { // this formal argument is the alias for actual argument
	x = x + 1;
	cout << x ;
	return 0;
}

int main() {
	int x = 10;
	fun(x);
}
