#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[])
{
/*	printf("%d %x",15,15);
	printf("%d %o",16,16);
	printf("%d %",15,15);*/
	rename("alaa.txt", "test.txt");
    FILE* fichier = NULL;
    

    fichier = fopen("test.txt", "r+");
    
   if(fichier == NULL){
   	printf("essayer");
   }else{
   	printf("ouvert");
   	 //fputs("alaa el oula", fichier);
   	 int main(int argc, char *argv[])
{
    

    return 0;
}
   }
   
   int a=fclose(fichier);
   if(a==0){
   	printf("fermeture");
   }else{
   	printf("error");
   }
   
   
    return 0;
}
