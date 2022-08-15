/*

The problem statement is: We are given a list of N elements and a number M. We have to find two elements in the given list whose sum is M.
List = [a1, a2, ... , aN]
So, if the two elements are ai and aj, then:
ai + aj = M

Example:
Given numbers = [2, 7, 11, 15], target = 9, Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1]
*/

#include <iostream>
#include <vector>
using namespace std;

bool chkPair(int arr[], int size, int target) 
{
    for (int i = 0; i < (size - 1); i++) 
    {
    	for (int j = (i + 1); j < size; j++) 
    	{
    	    if (arr[i] + arr[j] == target) 
    	    {
    	        cout << "Pair with given sum " << target << + " is [" << arr[i] << ", " << arr[j] << "]" << endl;
    	        return 1;
    	    }
    	}
    }
    return 0;
}

int main() 
{
    int arr[] = {0,-1,2,-3,1};
    int target = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    if (!chkPair(arr, size, target))
    	cout << "No valid pair exists for Target = " << target << endl;
    return 0;
}