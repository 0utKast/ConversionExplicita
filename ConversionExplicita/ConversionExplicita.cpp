/*int main()
{

    int i{ 62 };
    char ch = i ; // conversión restrictira implícita
    //char ch{ i }; // dará error.

}*/

/*int main()
{

    int i{ 62 };

    // conversión explícita de int a char, 
    //se asigna un char a la variable ch
    char ch{ static_cast<char>(i) };
}*/







int main()
{

    int i{ 100 };
    i = i / 2.5;    

    int i{ 100 };
    i = static_cast<int>(i / 2.5);
}








/*#include <iostream>

int main()
{
    int x{ 10 };
    int y{ 4 };    
    double d{ static_cast<double>(x) / y };
    std::cout << d; // prints 2.5
    return 0;
}*/


















/*#include <iostream>

int main()
{
    char c{ 'a' };
    std::cout << c << ' ' << static_cast<int>(c) << '\n'; // imprime a 97

    return 0;
}*/


















/*#include <iostream>

int main()
{
    int x{ 10 };
    int y{ 4 };
    //double d{ (double)x / y };

    double d{ double (x) / y };

    std::cout << d;
    return 0;
}*/













/*#include <iostream>

int main()
{
    int x{ 10 };
    int y{ 4 };
    double d = x / y; 
}*/





/*#include <iostream>
double d = 10 / 4.0 ;
int main()
{
    std::cout << d;
}*/





