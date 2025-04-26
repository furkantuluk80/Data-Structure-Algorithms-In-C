#include "types.h"

void best_bubble_sort(UINT16 array[], UINT16 n) {
    int i, j;
    int ctrl;
    int temp;

    do {
        ctrl = 1; // basta sırali kabul et
        for (i = 0; i < n - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                ctrl = 0; // degisikliy yapildiysa sirali degil demektir.
            }
        }
    } while (ctrl == 0);
}
