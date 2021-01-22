#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char arg1[60];
char arg2[60];

void func(char *s){
	char buf[32];
	strcpy(buf, s);
	
	printf("you entered: %s\n", buf);
}

void secret(){
  system(arg2);
}

int main(int argc, char *argv[]){
	if(argc < 2){
		printf("Usage: %s some_string\n", argv[0]);
		return 2;
	}
	strcpy(arg1, argv[1]);

	if (argc == 3) {
	  strcpy(arg2, argv[2]);
	}
	  
	func(argv[1]);
	return 0;
}
