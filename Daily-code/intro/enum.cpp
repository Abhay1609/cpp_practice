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
int main(){
    Color fav = Color::green;
    //#TODO why we use enum class not only enum
    //fav = 1;
   // Car fav_car = 1;
    std::cout << "Hello"  << std::endl;
    return 0;
}