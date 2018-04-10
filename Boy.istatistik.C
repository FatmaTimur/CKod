#include <stdio.h>

int main ()
{
    char cinsiyet;
    int anneboy, bababoy;
    float hedefboy;


   printf("Cocugun cinsiyetini giriniz <E,e - K,k > : ");
   scanf("%c", &cinsiyet);

   switch (cinsiyet) {

   case 'E' :
   case 'e':
   

       printf ("Babasinin boyunu giriniz : ");
       scanf ("%d", &bababoy);
       printf ("Annesinin boyunu giriniz :");
       scanf ("%d", &anneboy);

       hedefboy = (anneboy + bababoy +13)/ 2.00;
       printf("Hedef boy = %.2f \n", hedefboy);

               if (hedefboy > 175)
               printf("Turkiye ortalamasi uzerinde bir boy.");
           else if (hedefboy <175)
           printf("Turkiye ortalamasi altinda bir boy. ");
       else
           printf ("Turkiye ortalamasina esittir. ");
       break;

   case 'K':
   case 'k':

       printf ("Babasinin boyunu giriniz : ");
       scanf ("%d", &bababoy);
       printf ("Annesinin boyunu giriniz :");
       scanf ("%d", &anneboy);

       hedefboy = (anneboy + bababoy -13)/ 2.00;
          printf("Hedef boy = %.2f \n", hedefboy);

               if (hedefboy > 163)
               printf("Turkiye ortalamasi uzerinde bir boy.");
           else if (hedefboy <163)
           printf("Turkiye ortalamasi altinda bir boy. ");
       else
           printf ("Turkiye ortalamasina esittir. ");
         break;


   default:
       printf ("Yanlis bir ifade girdiniz. Kadin = K,k - Erkek = E,e giriniz.");
       break;
   }
   return 0;
}
