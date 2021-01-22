#include <stdio.h>
#include <string.h>
#include <unistd.h>

void func(char *s){
	char buf[32];
	strcpy(buf, s);
	
	printf("you entered: %s\n", buf);
}

void secret(){
	printf("The password for the root account is 12345!\n");
	fflush(stdout);
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: %s some_string\n", argv[0]);
		return 2;
	}
	
	func(argv[1]);
	
	return 0;
}
