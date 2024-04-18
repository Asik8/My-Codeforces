<!-- Use this to calculate unique values inside of a array -->

int l = 0;
bool found[max_size - 1] = {false};
for (int i = 0; i < n; i++)
{
    if (!found[arr[i]])
    {
        found[arr[i]] = true;
        l++;
    }
}


<!-- Quick Sort Code:- -->

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

qsort(arr, n, sizeof(int), compare);



