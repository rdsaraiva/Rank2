#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int i;
    int size;

    if (start >= end)
        size = start - end + 1;
    else
        size = end - start + 1;
    arr = malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < size)
    {
        if (start <= end)
            arr[i] = start + i;
        else
            arr[i] = start - i;
        i++;
    }
    return (arr);
}
