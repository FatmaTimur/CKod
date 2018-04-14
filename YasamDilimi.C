#include <stdio.h>

int main ()
{
	int yas;
	
	printf ("Lutfen yasinizi giriniz:");
	scanf ("%d", &yas);
	
	if (yas<=12)
	{ 
	 printf ("Suan cocuksunuz..\n");
	}
	
		else if (yas>12 && yas<=25) 
		{
			printf ("Suan gencsiniz..\n");
	}
		

	else if (yas>25 && yas<=45)
	{ printf ("Suan olgun bir yasa sahipsiniz..\n");
	}
	
	
	else 
	printf ("Yaslısınız...\n");
	
	return 0;
}
