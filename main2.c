#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	int i;
	char str[100];
	//for repetition
	for(i=0;i<3;i++){
	
	//1. open file
		fp=fopen("sample.txt","w");
	//2. write file
	//2-1. print"input a word"
		printf("input a word:");
	//2-2. scanf a string
		scanf("%s\n",str);
	//2-3. fprintf()
		fprintf(fp,"%s",str);
	}
	fclose(fp);	
	
	return 0;
}


