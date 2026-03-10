#include <stdio.h>

int main(void) {
    // If you don't specify the size, C counts the elements for you!
    int auto_sized_array[] = {5, 15, 25, 35};

    // We can use the sizeof operator to find out how many elements there are
    // sizeof(array) gives total bytes. sizeof(array[0]) gives bytes per element.
    int size = sizeof(auto_sized_array) / sizeof(auto_sized_array[0]);

    printf("The array has %d elements.\n", size);

    return 0;
}
