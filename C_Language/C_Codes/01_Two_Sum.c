// Sum of any two number to get the target.


// Pseudocode
// List of numbers
// Sum target
// Try sum different numbers
// Return indexes
// Print result

int* two_sum (int* numbers, int size_numbers, int target) {
    for (int i = 0; i < size_numbers; i++)
    {
        for (int j = i + 1; j < size_numbers; j++)
        {
            if (*(numbers + i) + *(numbers + j) == target)
            {
                int* result = (int*)malloc(2*sizeof(int));
                result[0] = *(numbers + i);
                result[1] = *(numbers + j);
                return result;
            }
            
        }
        
    }
    
}