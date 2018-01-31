#include<stdio.h>
#include<stdlib.h>

char name[0x10];


int main(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);

    system( "echo What your name?" );

    read( 0 , name , 0x10 );

    puts( "What do you want to say :)?" );

    char buf[0x30];

    read( 0 , buf , 0x50 );

    return 0;
}