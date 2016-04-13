#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
        char slowo1[20],slowo2[20];
        int m;
        printf("\n Podaj pierwsze slowo: ");
        scanf("%s",slowo1);
        printf("\n Podaj drugie slowo: ");
        scanf("%s",slowo2);
        strcat(slowo1,slowo2);
        printf("\n Pierwze slowo (po polaczeniu z drugim): %s",slowo1);
        getch();
        return 0;
}
