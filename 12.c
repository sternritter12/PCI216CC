#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
        FILE *fp;
        int i;
        struct dane_liczbowe_o_panstwie\
        {
                double powierzchnia;
                double ilosc_mieszkancow;
        };
        struct sasiedzi_Polski
        {
                char panstwo[30];
                char stolica[30];
                struct dane_liczbowe_o_panstwie liczby;
        }panstwo[7];
        strcpy(panstwo[0].panstwo,"Bialorus");
        strcpy(panstwo[0].stolica,"Minsk");
        panstwo[0].liczby.powierzchnia=207.6;
        panstwo[0].liczby.ilosc_mieszkancow=9.972;
        strcpy(panstwo[1].panstwo,"Czechy");
        strcpy(panstwo[1].stolica,"Praga");
        panstwo[1].liczby.powierzchnia=78.9;
        panstwo[1].liczby.ilosc_mieszkancow=10.3;
        strcpy(panstwo[2].panstwo,"Litwa");
        strcpy(panstwo[2].stolica,"Wilno");
        panstwo[2].liczby.powierzchnia=65.2;
        panstwo[2].liczby.ilosc_mieszkancow=3.7;
        strcpy(panstwo[3].panstwo,"Niemcy");
        strcpy(panstwo[3].stolica,"Berlin");
        panstwo[3].liczby.powierzchnia=357.023;
        panstwo[3].liczby.ilosc_mieszkancow=82.6;
        strcpy(panstwo[4].panstwo,"Rosja");
        strcpy(panstwo[4].stolica,"Moskwa");
        panstwo[4].liczby.powierzchnia=17075;
        panstwo[4].liczby.ilosc_mieszkancow= 146.861;
        strcpy(panstwo[5].panstwo,"Slowacja");
        strcpy(panstwo[5].stolica,"Bratyslawa");
        panstwo[5].liczby.powierzchnia=49.5;
        panstwo[5].liczby.ilosc_mieszkancow=5.2;
        strcpy(panstwo[6].panstwo,"Ukraina");
        strcpy(panstwo[6].stolica,"Kijow");
        panstwo[6].liczby.powierzchnia=603.7;
        panstwo[6].liczby.ilosc_mieszkancow=52.1;
        for(i=0;i<7;i++)
        {
                printf("\n panstwo:\t %s",panstwo[i].panstwo);
                printf("\n stolica:\t %s",panstwo[i].stolica);
                printf("\n powierzchnia:\t %lf",panstwo[i].liczby.powierzchnia);
                printf("\n ludnosc:\t %lf",panstwo[i].liczby.ilosc_mieszkancow);
        }
        getch();
        return 0;
}