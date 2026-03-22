#include <iostream>


constexpr void print(int a)
{
    std::cout << "Hello " << a << std::endl;
}
int main(){
    const int b = 10;
    //constexpr the evaluate at compile time so it neccessary to provide const value
    //#TODO what is use of constexpr function and why should we use constexpr
    constexpr int a = b * b;
    std::cout << "Hello" << std::endl;
    return 0;
}