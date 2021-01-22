gcc -fno-stack-protector -no-pie -fno-pie -z execstack -mpreferred-stack-boundary=2 -fno-asynchronous-unwind-tables -o $1 $1.c
