#include <iostream>


enum class Color{
    red,
    green,
    yellow
};
enum Car{
    alto,
    santro
};
enum Lang : char {
    c,
    python
};
int main(){
    Color fav = Color::green; // enum class always used in scope
    int fav_car = alto; // no error
    if ( alto == 0)
    {
        std::cout <<  "Integer match with enum type " << std::endl;
    }
    char l = python;
    std::cout << "Lang in char is " << static_cast<int>(l) << std::endl;


    //#TODO why we use enum class not only enum ====> Done
    //fav = 1;
   // Car fav_car = 1;
    std::cout << "Hello"  << std::endl;
    return 0;
}