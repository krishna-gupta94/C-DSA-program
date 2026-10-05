#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("No. Of Elements: ");
    scanf("%d", &n);

    printf("Enter the Elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
