#include <cstdio>

int main()
{
    const char *a = "foo";
    printf("%s\n", a);

    // OK because a is  writable

    a = "bar";
    printf("5s\n", a);

    // Not OK because *a is not declared as constant
    //*a = 'b'; 
}