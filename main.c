#include <stdio.h>
#include <stddef.h>

int sum_array(const int *arr, size_t n) {
    int sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(void) {
    int nums[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(nums) / sizeof(nums[0]);

    int total = sum_array(nums, n);
    printf("Sum = %d\n", total);

    return 0;
}

