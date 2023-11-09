#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	char src[]="the worst thing";
 	char dst[100];
 	//empty space destination dst[100], put src ("")in the dst
 	strcpy(dst,src);
 	printf("copied string: %s",dst);
 	
 	
	
	return 0;
}


