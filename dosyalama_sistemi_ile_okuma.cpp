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
	dosya=fopen("c:\\github\\dosyalama_sistemi.txt","r");
	while(fscanf(dosya,"%d %d",&i,&a)!=EOF){
		printf("%d\n",i);
	}
	fclose(dosya);
 	getchar();
}
