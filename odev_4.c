#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct ogrenci1{
	char ad[20][20];
	char soyad[20][20];
	char ogrno[15][15];
	char telno[15][15];
	char mail[20][20];
}a;


struct ogrenci2{
	char ad[20][20];
	char soyad[20][20];
	char ogrno[15][15];
	char telno[15][15];
	char mail[20][20];
}b;


struct ogrenci3{
	char ad[20];
	char soyad[20];
	char ogrno[15];
	char telno[15];
	char mail[20];
}c;


void kullaniciekle();
void telefonubul();
void ogrnobul();
void mailbul();
void isimsirala();
void ogrnosirala();

void main()
{ 

		int secim;
			int sira;
		printf("1 -> Kullanici ekle \n2 -> Kullanici bul \n3 -> Sirala \n4 -> Cikis \n ");
		printf("Lutfen seciminizi yapiniz: ");
		scanf("%d", &secim);
	
		switch (secim) {
		case 1:  kullaniciekle();
		main();
			break;
		case 2: 
	
		printf("1 -> Telefon numarasina gore bul \n 2 -> Ogrenci numarasina gore bul \n 3 -> Mail adresine gore bul \n 4 -> Bir ust menuye don \n ");
			int secim2;
		scanf("%d",&secim2);
	
		 switch (secim2)
		 {
		 	case 1:telefonubul();
		 main();
		 	break;
		 	case 2:ogrnobul();
		 main();
		 	break;
		 	case 3:mailbul();
		 main();
		 	break;
		 	case 4: main();
			break;
		 	
		 }
		
		
		
			break;
		case 3:
			
	
		printf("1 -> Isme gore sirala \n 2 -> Ogrenci numarasina gore sirala \n 3 -> Bir ust menuye don \n ");
		scanf("%d",&sira);
			if (sira==1){
				isimsirala();
			}
		else if (sira==2){
			   ogrnosirala();
		}
		else if (sira==3){
			   main();
		}
		
			break;
		case 4:	exit(EXIT_SUCCESS);
			break;
		
		}
	
	
	


}

void kullaniciekle() {
	  FILE * dosya;
		dosya = fopen("student.txt", "w+");
	
	if (dosya == NULL){
		printf("Aradiginiz dosya bulunamadi .\n");
}
	else
	{
	
		printf("Ogrencinin bilgilerini giriniz\n");
		printf("Adi:"); 
		scanf(" %s", b.ad);
		printf("Soyadi:"); 
		scanf(" %s", b.soyad);
		printf("Ogrenci No:"); 
		scanf("%s", b.ogrno);
		printf("Telefon no:"); 
		scanf("%s", b.telno);
		printf("Mail:"); 
		scanf("%s", b.mail);
       	fprintf(dosya, "%s\n %s\n %s\n %s\n %s\n", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
      
        fclose(dosya);
	}
		getch();
		


}





	
void telefonubul()
{
	  FILE * dosya;
		dosya = fopen("student.txt", "w+");
	
char no[30];
printf("Telefonu Giriniz: ");
scanf("%s",no);	
if((dosya=fopen("student.txt","r"))==NULL)
{
	printf("dosya bulunamadi");
}	
else{
int tut=0;
while(!feof(dosya)){
	fscanf(dosya, "%s\t%s\t%s\t%s\t%s", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    if(strcmp(no, b.telno)==0){
    	
    printf("%s\t%s\t%s\t%s\t%s\n", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    tut=1;
    break;
    	
	}
}

	fclose(dosya);
	if(tut==0){
	
	printf("Ogrenci Bulunamadi");
}
}	
	
}
void ogrnobul()
{
	  FILE * dosya;
		dosya = fopen("student.txt", "w+");
	
char ogrencino[30];
printf("Ogrenci Numarasini Giriniz: ");
scanf("%s",ogrencino);	
if((dosya=fopen("student.txt","r"))==NULL)
{
	printf("dosya bulunamadi");
}	
else{
int tut2=0;
while(!feof(dosya)){
	fscanf(dosya, "%s\t%s\t%s\t%s\t%s", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    if(strcmp(ogrencino, b.ogrno)==0){
    	
    printf("%s\t%s\t%s\t%s\t%s\n", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    tut2=1;
    break;
    	
	}
}

	fclose(dosya);
	if(tut2==0){
	
	printf("Ogrenci Bulunamadi");
}
}	
	
}





void mailbul()
{
	  FILE * dosya;
		dosya = fopen("student.txt", "w+");
	
char mailno[30];
printf("Mail  Giriniz: ");
scanf("%s",mailno);	
if((dosya=fopen("student.txt","r"))==NULL)
{
	printf("dosya bulunamadi");
}	
else{
int tut3=0;
while(!feof(dosya)){
	fscanf(dosya, "%s\t%s\t%s\t%s\t%s", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    if(strcmp(mailno, b.mail)==0){
    	
    printf("%s\t%s\t%s\t%s\t%s\n", b.ad, b.soyad, b.ogrno, b.telno, b.mail);
    tut3=1;
    break;
    	
	}
}

	fclose(dosya);
	if(tut3==0){
	
	printf("Ogrenci Bulunamadi");
}
}	
	
}






void isimsirala()
{
	FILE * dosya;
		dosya = fopen("student.txt", "w+");
	
int k;	
int j;	
int i=0;
if((dosya=fopen("student.txt","r"))==NULL)
{
	printf("dosya bulunamadi");
}	
else{
	
while(!feof(dosya)){
	fscanf(dosya, "%s\t%s\t%s\t%s\t%s", b.ad[i], b.soyad[i], b.ogrno[i], b.telno[i], b.mail[i]);
	i++;
}
char tut4[20];

for(k=0;k<i-1;k++){
 for(j=k+1;j<i;j++){
 
      if(strcmp(b.ad[k],b.ad[j])>0){
 	    
		strcpy(tut4,b.ad[k]);
		strcpy(b.ad[k],b.ad[j]);
		strcpy(b.ad[j],tut4);
		strcpy(tut4,b.soyad[k]);
		strcpy(b.soyad[k],b.soyad[j]);
		strcpy(b.soyad[j],tut4);
		strcpy(tut4,b.ogrno[k]);
		strcpy(b.ogrno[k],b.ogrno[j]);
		strcpy(b.ogrno[j],tut4);
		strcpy(tut4,b.telno[k]);
		strcpy(b.telno[k],b.telno[j]);
		strcpy(b.telno[j],tut4);
		strcpy(tut4,b.mail[k]);
		strcpy(b.mail[k],b.mail[j]);
		strcpy(b.mail[j],tut4);
		
	 }
 }	
}
for(j=0;j<i;j++){
	printf("%s\t%s\t%s\t%s\t%s\n", b.ad[j], b.soyad[j], b.ogrno[j], b.telno[j], b.mail[j]);
}


	fclose(dosya);
	
}	
	
}

void ogrnosirala()
{
	FILE * dosya;
		dosya = fopen("student.txt", "w+");
int i=0;
if((dosya=fopen("student.txt","r"))==NULL)
{
	printf("dosya bulunamadi");
}	
else{
	
while(!feof(dosya)){
	fscanf(dosya, "%s\t%s\t%s\t%s\t%s", b.ad[i], b.soyad[i], b.ogrno[i], b.telno[i], b.mail[i]);
	i++;
}
int j=0;
char tut[15][15];
int k;
for(j=0;j<i;j++){
	for(k=1;k<i-1;k++){
		if(strcmp(b.ogrno[k-1],b.ogrno[k])>0){
		strcpy(tut[j],b.ogrno[k]);
		strcpy(b.ogrno[k],b.ogrno[k-1]);
		strcpy(b.ogrno[k-1],tut);
		strcpy(tut[j],b.ad);
		strcpy(b.ad,b.ad[k-1]);
		strcpy(b.ad[k-1],tut);
		strcpy(tut[j],b.soyad[k]);
		strcpy(b.soyad[k],b.soyad[k-1]);
		strcpy(b.soyad[k-1],tut);
		strcpy(tut[j],b.telno[k]);
		strcpy(b.telno[k],b.telno[k-1]);
		strcpy(b.telno[k-1],tut);
		strcpy(tut[j],b.mail[k]);
		strcpy(b.mail[k],b.mail[k-1]);
		strcpy(b.mail[k-1],tut);
		}
	}
}
for(j=0;j<i;j++){
	printf("%s\t%s\t%s\t%s\t%s\n", b.ad[j], b.soyad[j], b.ogrno[j], b.telno[j], b.mail[j]);
}



	fclose(dosya);
	
}
}





