#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Num1: ";
    std::cin >> num1;
    std::cout << "Num2: ";
    std::cin >> num2;

    std::swap(num1, num2);

    std::cout << std::endl;
    std::cout << "Num1 = " << num1 << std::endl;
    std::cout << "Num2 = " << num2 << std::endl;

    return 0;
}
