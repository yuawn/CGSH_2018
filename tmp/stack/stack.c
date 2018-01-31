#include <stdio.h>
#include <stdlib.h>



int add( int a , int b ){
    int c = a + b;
    return c;
}


int main(){
    int sum;

    sum = add( 5 , 17 );

    sum *= 8;

    printf( "%d\n" , sum );

    return 0;
}