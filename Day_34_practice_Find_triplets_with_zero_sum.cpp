class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr + n);

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            int target = -arr[i];  // Triplet sum should be zero

            while (left < right) {
                int currentSum = arr[left] + arr[right];

                if (currentSum == target) {
                    return true;  // Triplet found
                } else if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return false;  // No triplet found
    }
};
