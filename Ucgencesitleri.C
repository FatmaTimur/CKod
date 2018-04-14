#include <stdio.h>

int main ()
{
    int x,y,z;

    printf("Ucgenin birinci kenarini giriniz:");
    scanf("%d",&x);

    printf("Ucgenin ikinci kenarini giriniz:");
    scanf("%d",&y);

    printf ("Ucgenin ucuncu kenarini giriniz.");
    scanf("%d",&z);


    if ((x==y) && (y==z))

      {  printf ("Eskenar bir ucgendir.\n"); }


    else if ((x==y) || (y==z) || (x==z))

     { printf ("Ikizkenar ucgendir.\n"); }


    else

   { printf ("Cesitkenar ucgendir.\n"); }


    return 0;
}
