#include<stdio.h>
#include<stdlib.h>

void vulunable(){
    char buffer[0x200];
    puts("this is a vulunable function");
    puts("searching on baidu and learn how to exploit it");
    read(buffer, 0x500, 0);
    return;
}

void init(){
    setbuf(stdin, 0);
    setbuf(stdout, 0);
    setbuf(stderr, 0);
    return;
}

int main(){
    init();
    puts("hello,freshman");
    vulunable();
    puts("goodbyte,freshman");
    return 0;
}

__attribute__((noreturn)) void backdoor(){
    puts("wow,how do you find this");
    system("/bin/sh");
    exit(233);
}