#include <iostream>

const int len = 8;

bool TestMotDePasse(std::string monmotdepasse)
{
    return monmotdepasse == "aaaaboba";
}

/// @return false if reached max depth.
bool addCharRecursively(std::string* testing, int pos = -2)
{
    if (pos == -2)
        pos = len - 1;
    else if (pos == -1)
        return false;
    
    if (testing->at(pos) == 'z')
    {
        testing->at(pos) = 'a';
        return addCharRecursively(testing, pos - 1);
    }
    else
    {
        testing->at(pos)++;
        return true;
    }    
}

int main()
{
    std::string testing = "aaaaaaaa";

    do
    {
        std::cout << testing << std::endl;
        if (TestMotDePasse(testing))
        {
            std::cout << "Password found! It's = " << testing << std::endl;
            return 0;
        }
        
    } while (addCharRecursively(&testing));
    
    std::cout << "Password cannot be retrouved :(" << std::endl;
    return 0;
}
