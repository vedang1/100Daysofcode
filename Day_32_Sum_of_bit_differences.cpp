class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long sum = 0;

        // checking all 32 bits 

        for(int c=0; c<32; c++){

            long set = 0;

            // iterating the whole array

            for(int i=0; i<n; i++){

                // Count the no of bits set

                if((arr[i] & (1<<c)) >0)

                   set++;

            }

            // find and sum their permutation of diff bits

            sum += (set)*(n-set)*2;

        }

        return sum;

    }
};
