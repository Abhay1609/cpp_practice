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
   // added some dummy connmment
   // actuall enum and enum class have basic difference as scope
   // and conversion
   //
   // make place to cover all basic
   // and learn more about it
   //
   // prative ii
   // studt about the data type and declearion 
   // further study about char and int allign 
   //
   // cstdint limits ti
   //
   //
   // stduy about tlm and fw and bw as blocking and non blocking path
   //
   // in axi understand about the attribute and identification of txn/
    std::cout << "Hello"  << std::endl;
    return 0;
}
