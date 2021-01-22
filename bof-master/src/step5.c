/*
 *
 * gcc -fno-stack-protector -fno-pie -z execstack 
 * -mpreferred-stack-boundary=2 
 * -fno-asynchronous-unwind-tables -o vuln2 vuln2.c 
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]){
	char buffer[92];
	
	if(argc < 2){
		printf("Usage: %s <string>\n", argv[0]);
		exit(0);
	}
	
	strcpy(buffer, argv[1]);
}
