#include <stdio.h>

int main(int argc, char* argv[]) {
    char buf[8];
    FILE* tmpf = tmpfile();
    while (1) {
        fgets(buf, sizeof buf, stdin);
        printf("Your work is: %s\n", buf);
    }
    return(0);
}