#include<stdio.h>

void vulunable(){
    char buffer[0x200];
    puts("this is a vulunable function");
    puts("searching on baidu and learn how to exploit it");
    read(stdin, buffer, 0x500);
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