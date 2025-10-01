/** Pseudocode:
    One array.
    One target.
    One result.

    Compare first number with consecutive numbers.
    Compare second number with consecutive numbers.(except first)
    So on and so forth.

    Find the match that make the  target.

    Return result
*/

// Start of code
// Declaration Section
#include <stdio.h>
#include <stdlib.h>

// Two sum function definition
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2*sizeof(int)); // Reserve memory on the heap
    for(int i = 0; i < numsSize; i++) // First loop to compare numbers
    {
        for(int j = i + 1; j< numsSize; j++) // Second loop to compare
        {
            if(nums[i] + nums[j] == target) // Evaluate the target condition
            {   
                *(result + 0) = i; // Store the index of first number that meets the condition
                *(result + 1) = j; // Store the index of second number that meets the condition
                *returnSize = 2; // Indicate the array's size returned
                return result; // Return the array's address
            }
        }

    }
    *returnSize = 0; // Indicate the array's size if the solution isn't found
    return NULL; // Return NULL if the solution isn't found
}

// Test code
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 22;
    int returnSize;

    // Call to two sum function
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]); // Print indexes of array for sum target
        free(result); // Free memory allocated in twoSum
    } else {
        printf("No solution found.\n"); // Print no solution found
    }

    return 0; // Return 0 indicate correct execution of the code
}
// End of code

// How execute the code?:
// Type in terminal, in the address where is the code:
// gcc 01.two_sum.c -o Two_Sum & Two_Sum.exe 