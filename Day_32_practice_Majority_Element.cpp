class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count = 0;
        int element =-1;
        
        for(int i =0;i < size;i++)
        {
            if(count == 0)
            {
                 element = a[i];
            
               count = 1;
             }else if(element == a[i])
               {
                   count++;
               }
               else
               {
                   count--;
               }
        }
        count = 0;
        for(int i =0 ;i <size;i++)
        {
            if(element == a[i])
            {
                count++;
            }
        }
        if(count <= size/2)
          return -1;
          
          return element;
    }
};
