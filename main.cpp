#include <iostream>
#include <string>

bool isPalindrom(std::string & text)
{
    int i = 0;
    while(i < text.size()-i)
    {
        if(text.at(i) != text.at(text.size() - 1 - i))
        {
            return false;
            break;
        }
        else
        {
            i++;
            continue;
        }
    }
    return true;
}
int main()
{
    std::string x;
    std::cout << "Wprowadź frazę: ";
    std::cin >> x;
    if(isPalindrom(x) == 1)
    {
        std::cout << "Fraza jest palindromem" << std::endl;;
    }
    else
    {
        std::cout << "Fraza nie jest palindromem" << std::endl;
    }
    
    return 0;
}