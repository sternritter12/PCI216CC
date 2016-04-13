#include <stdio.h>
#include <conio.h>
main()
{
        struct instytuty
        {
                char nazwa[30];
                long int numer_telefonu;
        }instytut1,instytut2,instytut3,instytut4;
        printf(" Podaj nazwe instytutu: ");
        scanf("%s",instytut1.nazwa);
        printf(" Podaj numer telefonu instytutu: ");
        scanf("%ld",&instytut1.numer_telefonu);
        printf(" Podaj nazwe instytutu: ");
        scanf("%s",instytut2.nazwa);
        printf(" Podaj numer telefonu instytutu: ");
        scanf("%ld",&instytut2.numer_telefonu);
        printf(" Podaj nazwe instytutu: ");
        scanf("%s",instytut3.nazwa);
        printf(" Podaj numer telefonu instytutu: ");
        scanf("%ld",&instytut3.numer_telefonu);
        printf(" Podaj nazwe instytutu: ");
        scanf("%s",instytut4.nazwa);
        printf(" Podaj numer telefonu instytutu: ");
        scanf("%ld",&instytut4.numer_telefonu);
        printf("\n Instytut %s",instytut1.nazwa);
        printf("\n numer telefonu: %ld",instytut1.numer_telefonu);
        printf("\n Instytut %s",instytut2.nazwa);
        printf("\n numer telefonu: %ld",instytut2.numer_telefonu);
        printf("\n Instytut %s",instytut3.nazwa);
        printf("\n numer telefonu: %ld",instytut3.numer_telefonu);
        printf("\n Instytut %s",instytut4.nazwa);
        printf("\n numer telefonu: %ld",instytut4.numer_telefonu);
        getch();
        return 0;
}

 