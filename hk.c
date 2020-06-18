// Creator D. Moonen
// VSC Insiders

#include <stdio.h>
#include <unistd.h>

int main(void) {
    int counter;

    for(counter = 4; counter > 0; counter--) {
        printf("%d\n", counter);
        sleep(1);
        fflush(stdout);
    }
    printf("Hello Kitty\n");

}
