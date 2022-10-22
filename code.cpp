#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
  int a,b,c,d; 
  float e;
  system("color 6");
  printf("Ilk konumu x,y cinsinden gir: ");
  	scanf("%i,%i",&a,&b);
  printf("Son konumu x,y cinsinden gir: ");
    scanf("%i,%i",&c,&d);
  	e=sqrt(pow(c-a,2)+pow(d-b,2));
  	printf("sonuc:%f",e);
  	system("pause");
	  
return 0;
} 
