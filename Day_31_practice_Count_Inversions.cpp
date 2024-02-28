class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long l=0;
        long long r = N-1;
      return  countInv(arr,l,r);
        
    }
long long countInv(long long arr[], long long l, long long r)
{
    long long res = 0;
    if (l < r)
    {
        long long m = l + (r - l) / 2; // Fix the typo here
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countandmerge(arr, l, m, r);
    }
    return res;
}

long long countandmerge(long long arr[], long long l, long long m, long long r)
{
    long long n1 = m - l + 1;
    long long n2 = r - m;
    long long left[n1], right[n2];
    long long res = 0; // Initialize res to 0
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j]) // Fix the condition here
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            res = res + (n1 - i);
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;
    }

};
