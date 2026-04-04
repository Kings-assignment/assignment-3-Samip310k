#include <stdio.h>
#include <string.h>

int main() {

    char abc[100];
    int count = 0;

    Printf("enter a string: ");
    scanf("%s", abc);
     
    for ( int i=0; i<100; i++ ){
        if( abc[i] == '\0'){
            break;
    }
    count ++;
    }
    printf(" length of string is %d\n", count);

    return 0;

}
