#include <iostream>

int main()
{
    int num;

    while (true)
    {
        std::cout << "Num: ";
        std::cin >> num;

        if (num >= 10 && num <= 20)
            break;
        else if (num > 20)
            std::cout << "Plus petit" << std::endl;
        else
            std::cout << "Plus grand" << std::endl;
    }

    std::cout << "Saisie correcte" << std::endl;

    return 0;
}
