

findIndex(int* arr, int size)
{
    assert(arr);
    assert(size > 0);
    int low = 0;
    int high = size-1;
    while (low <= high)
    {
        int middle = (low + high)/2;
        if (arr[middle] == middle)
            return middle;
        if (arr[middle] < middle)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}
