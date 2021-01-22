#include <stdio.h>
#include <string.h>
#include <unistd.h>

int func(char *s){
  char buf[32];
  strcpy(buf, s);
  
  printf("you entered: %s\n", buf);
  if(strcmp(buf, "secret")) { 
    return 0;
  }
  return 1;
  
}


int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: %s some_string\n", argv[0]);
		return 2;
	}
	
	int res = func(argv[1]);

	if (! res) {
	  printf("you are denied\n");
	  return 0;
	}

	printf("you are allowed\n");
	return 0;
}
