#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
            arr[i] = end - i;
        else
            arr[i] = end + i;
        i++;
    }
    return (arr);
}
