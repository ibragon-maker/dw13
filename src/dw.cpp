#include "dw.h"

double compute_average(const int values[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += values[i];
    }
	if(size <= 0 ) return 0.0;
    return total / size;
}
