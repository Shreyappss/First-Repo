#include <stdio.h>

int main()
{
    int n, i, key;
    int arr[100];
    int comparisons;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Case (a): key at index 0 */
    key = arr[0];
    comparisons = 0;

    for(i = 0; i < n; i++)
    {
        comparisons++;

        if(arr[i] == key)
        {
            break;
        }
    }

    printf("\nCase (a): Key = %d (at index 0)", key);
    printf("\nNumber of comparisons = %d\n", comparisons);


    /* Case (b): key not present */
    printf("\nEnter a key that is NOT present in the array: ");
    scanf("%d", &key);

    comparisons = 0;

    for(i = 0; i < n; i++)
    {
        comparisons++;

        if(arr[i] == key)
        {
            break;
        }
    }

    printf("Case (b): Key = %d (not present)", key);

    if(i == n)
        printf("\nKey not found.");

    printf("\nNumber of comparisons = %d\n", comparisons);

    return 0;
}