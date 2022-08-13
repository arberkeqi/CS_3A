#include <cstdio>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main()
{
    char c1;
    unsigned char uc1;
    int vals[] = {-1000, -100, 0, 100, 1000};

    printf("*** c1 ***\n");
    for (int i = 0; i < SIZE(vals); i++){
        char c1 = vals[i];
        printf("%d: %d\n", i);
    }

    printf("\n*** uc1 ***\n");
    for (int i = 0; i < SIZE(vals); i++){
        unsigned char uc = vals[i];
        printf("%uc1[%d] = %d\n", i, uc);
    }
}