#include <iostream>
#include <string>
#include <random>

int main()
{
    std::string a = "Hello";
    a+= ", World";
    std::cout<< a << std::endl;

    // Huge array of characters, very efficent 
    char buf[1000000];
    for(int i = 0; i < sizeof(buf); i++)
    {
        buf[i] = 'a' + rand() % 26;
    }
    buf[sizeof(buf)-1] = '\0';
    printf("%s\n", buf);
}
