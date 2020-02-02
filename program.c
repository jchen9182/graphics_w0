#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("image.ppm", "w");

    fprintf(fp, "P3\n500 500\n255");

    int counter = 1;
    for (int i = 0; i < 500; i++) {
        fprintf(fp, "\n");
        
        if (i % 51 == 0 && i != 0) counter++;

        if (! (i < 51 * counter - 10)) {
            for (int j = 0; j < 500; j++) {
                fprintf(fp, "200 200 200 ");
            }
        }
        else {
            int iters = 1;
            for (int j = 0; j < 500; j++) {
                if (j % 51 == 0 && j != 0) iters++;

                if (j < 51 * iters - 10) fprintf(fp, "0 0 0 ");
                else fprintf(fp, "200 200 200 ");
            }
        }
    }

    fclose(fp);
    return 0;
}
