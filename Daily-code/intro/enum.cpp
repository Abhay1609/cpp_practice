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
   // cstdint limits t
   // stdu about the graphg and stringn
   // stduy about ll1 htammer
   // ati
   //study more about pointer and auto keyword as assing intializer list 
   //and also study about stringliter al raw string
   //stdyy aboit the message for non blocking and blocking
   //get meaning of sysnc return from each txn
   //study about basic opcode and snoo and caching
   study
	   about
	   pointer and 2 d array and how array is passed to function

	   one dimension is not used in array 


	   when passed to function
	   uy about tlm and fw and bw as blocking and non blocking path
   //
   // in axi understand about the attribute and identification of txn/
    std::cout << "Hello"  << std::endl;
    return 0;
}
