#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
 int i,a;
 FILE*dosya;
 dosya=fopen("c:\\github\\dosyalama_sistemi.txt","w");
 for(i=0;i<3;i++){
 	printf("%d.dosyada olacak sayý: ",i);
 	scanf("%d",&a);
 	fprintf(dosya,"%d. sýradaki numara: %d\n",i,a);
 }
 fclose(dosya);
 printf("dosyalar kaydedildi!!!");
	getchar();
}
