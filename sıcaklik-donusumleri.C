#include<stdio.h>
#include<conio.h>


void menu( );
void fahrenheit( );
void celsius( );

int main() {
    char choise;
    menu();

    do {
    menu();
    scanf("%d",&choise);

       switch(choise) {
      case 1 : fahrenheit();break;
      case 2 : celsius();break;
      case 3 : printf("Program Sonu");break;
       }
    getch();
    } while(choise!=3);

    return 0;
}

void menu() {
    printf("\n- MENU -\n");
    printf("Fahrenheit'dan Celcius'a...........................1 \n");
    printf("Celcius'dan Fahrenheit'a...........................2 \n");
    printf("Programdan Cikis...................................3 \n");
    printf("Bir Numara Secin ve Enter'a Basin ");
}
void fahrenheit() {
    float fah,cel;
    printf("Lutfen Fahrenheit Degerini Girin : ");
    scanf("%f",&fah);
    cel=5.0/9.0*(fah - 32.0);
    printf("%f Fahrenheit = %f\n",fah,cel);
}
void celsius() {
    float fah,cel;
    printf("Lutfen Celcius Degerini Girin : ");
    scanf("%f",&cel);
    fah=9.0/5.0*cel + 32.0;
    printf ("%f Celcius = %f ",cel,fah);
}
