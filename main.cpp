#include <iostream>
<<<<<<< HEAD
using namespace std;
int main (){
    cout <<  "hello c++" << endl;
=======

int multiply(int a, int b)
{
    if (a * b < 0)
    {
        return 0;
    }
    return a * b;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    std::cout << "Hello 超級貓貓人!" << std::endl;
    std::cout << "5 * 6 = " << multiply(5, 6) << std::endl;
    std::cout << "5 * 6 * 7 = " << multiply(5, 6, 7) << std::endl;
    std::cout << "5 * -6 = " << multiply(5, -6) << std::endl;
>>>>>>> 296f6ba0bf2c65fcfd4bf79b8f00c92a922b238f
    return 0;
}