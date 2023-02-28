#include<stdio.h>

//typedef JUNA_NAV  NAVIN_NAV

typedef int INTEGER;

typedef unsigned long int ULONG;
struct demo
{
        int a;
        int b;
};

typedef struct demo DEMO;
typedef struct demo *PDEMO

int main()
{
        INTEGER i = 10;     //int i = 10;

        ULONG J = 21;       //unsigned long int j = 21;

        DEMO obj;               //struct demo obj;

        PDEMO ptr = &obj;       //struct demo *ptr = &obj;

        return 0;
}