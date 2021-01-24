#include <iostream>

int main()
{
	std::cout << "hello\n";
    int *p = new int;
    delete p;
    return 0;
}