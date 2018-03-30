#include <stdio.h>

int main ()

{
	int i,j, taban;
	int kare, bosluk;
	
	printf ("Piramit kac kat kare olsun :");
	scanf ("%d", &taban );
	
	kare = 1;
	bosluk = taban -1;
	
	
	for (i=0; i<taban ; i++){
		for (j=0; j<bosluk; j++){
			printf (" ");
		}
	
		for (j=0; j<kare; j++){
			printf ("#");
		}
		
		printf ("\n");
		bosluk--;
		kare += 2;
	}
	
	return 0;
}
