#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of names : ");
    scanf("%d", &n);
    char *arr[n];
    size_t m_size = 100;
    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(m_size * sizeof(char));
        scanf("%99s", arr[i]);
    }
    char *search = malloc(m_size * sizeof(char));
    printf("Enter search string : ");
    scanf("%99s", search);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i], search) == 0)
        {
            printf("found");
        }
    }
}
