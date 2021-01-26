#include <iostream>

int main()
{
	std::cout << "hello\n";
    int *p = new int;
    p[0] = 42;
    std::cout << p[0] << "\n";
    delete p;
    return 0;
}