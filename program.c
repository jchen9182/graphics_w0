#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("image.ppm", "w");

    fprintf(fp, "P3\n500 500\n255");

    for (int i = 0; i < 500; i++) {
        fprintf(fp, "\n");
        for (int j = 0; j < 500; j++) {
            fprintf(fp, "255 255 0 ");
        }
    }

    fclose(fp);
    return 0;
}
