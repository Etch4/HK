// Creator D. Moonen
#include <stdio.h>
#include <unistd.h>

void main(void) {
    int counter;

    for(counter = 3; counter > 0; counter--) {
        printf("%d\n", counter);
        sleep(1);
        fflush(stdout);
    }
    printf("Hello Kitty\n");

}
