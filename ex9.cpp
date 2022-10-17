#include <iostream>

std::string Cesarify(std::string input, int cesar_coef)
{
    std::string output;
    char temp;

    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            temp = input[i] + cesar_coef;
            while (temp > 'z')
            {
                temp -= 'z' - 'a' + 1;
            }
            while (temp < 'a')
            {
                temp += 'z' - 'a' + 1;
            }
            output.push_back(temp);
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            temp = input[i] + cesar_coef;
            while (temp > 'Z')
            {
                temp -= 'Z' - 'A' + 1;
            }
            while (temp < 'A')
            {
                temp += 'Z' - 'A' + 1;
            }
            output.push_back(temp);
        }
        else
            output.push_back(input[i]);
    }
    
    return output;
}

int main()
{
    std::string input;
    std::cout << "String to 'cesarify': ";
    std::getline(std::cin, input);

    int cesar_coef;
    std::cout << "Coefficient of cesarifying (can be negative): ";
    std::cin >> cesar_coef;

    std::cout << Cesarify(input, cesar_coef) << std::endl;

    return 0;
}
