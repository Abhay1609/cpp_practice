#include <iostream>
bool error(int i )
{
    if ( i == 0)
    {
        return false;
    }
    return true;
}

int main()
{
    try{
        if ( !error(0) )
        {
            throw std::runtime_error("Value is zero");
        }
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Basic tour is completed!!" << std::endl;
}
