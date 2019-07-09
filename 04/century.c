#include <stdio.h>

int printCentury (int);
char * printOrdinal (int);

int main (void)
{
    int year = 0;
    printf("Enter year: ");
    scanf("%d", &year);
    int century = printCentury(year);
    char* ordinal = printOrdinal(century);
    printf("The year %d falls in the %d%s century.\n", year, century, ordinal);
}

int printCentury (int year)
{
    int century = (year / 100) + 1;
    return century;
}

char* printOrdinal (int century)
{
    char* st = {"st"};
    char* nd = {"nd"};
    char* rd = {"rd"};
    char* th = {"th"};
    if (century % 10 == 1 && century % 100 != 11) return st;
    else if (century % 10 == 2 && century % 100 != 12) return nd;
    else if (century % 10 == 3 && century % 100 != 13) return rd;
    else return th;
}