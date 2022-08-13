#include <cstdio>

// Pass by value
void inc1(double v)
{
    v++;
}

// Pass by reference
void inc2(double &v)
{
    v++;
}

// Pass pointer
void inc3(double *vp)
{
    (*vp)++;
}

int main()
{
    double e = 1;
    printf("#1: e = %lf\n", e); // 1

    inc1(e);
    printf("#1: e = %lf\n", e); // 1

    inc2(e);
    printf("#1: e = %lf\n", e); // 2

    inc3(&e);
    printf("#1: e = %lf\n", e); // 3

    double pi = 3.1415926;
    printf("%lf\n", pi); // print 3.141593
    printf("%.2lf\n", pi); //print only 3.14 

    char buf[0x10];
    sprintf(buf, "%.2lf", pi);
    double pilow;
    sscanf(buf, "%lf", &pilow);
    printf("%lf\n", pilow);
}
