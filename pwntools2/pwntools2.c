#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#define TIMEOUT 60

void handler(int signum){
    puts("Timeout");
    _exit(1);
}


int main(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);
    signal(SIGALRM,handler);
    alarm(TIMEOUT);

    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);

    puts( "Guess the number then get the flag :)" );

    int magic = random() % 1024 , t = 10;



    while( t-- ){
        puts( "Guess:" );
        int tmp;
        scanf( "%d" , &tmp );
        if( tmp == magic ){
            puts( "FLAG{Y0u_4re_5uch_4_h4cker}" );
            break;
        }
        else if( magic > tmp ) puts( "bigger" );
        else puts("smaller");
    }

    
    return 0;
}