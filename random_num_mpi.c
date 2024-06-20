#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_arrays(int num_arrays, int array_size) {
    FILE *fp;
    fp = fopen("in.txt", "w");
    srand(time(NULL));
    for (int i = 0; i < num_arrays; i++) {
        for (int j = 0; j < array_size; j++) {
            int val = rand() % 10001;
            fprintf(fp, "%d ", val);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

int main() {
    int num_arrays, array_size;
    scanf("%d %d", &num_arrays, &array_size);
    generate_arrays(num_arrays, array_size);
    return 0;
}
