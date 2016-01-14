/* 
 * 有序序列二分法查找
 */
#include <stdio.h>
#include <stdlib.h>

#define NotFound -1

/**
 * 主函数
 * @return int
 */
int main(void) {
    int list[] = {2, 5, 6, 9, 10, 12, 18, 20, 25, 26, 28, 29, 32, 41, 48, 53, 54, 59, 64, 65, 70, 71, 73, 82, 89, 90, 96, 98, 100};
    int count, result;
    int search = 71;
    
    count = sizeof(list) / sizeof(list[0]);
    result = BinarySearch(list, search, count);
    if(result >= 0)
        printf("Find %d in list, result is %d", search, result);
    else
        printf("Not find %d in list", search);
    
    return EXIT_SUCCESS;
}

/**
 * 二分法查找
 * 时间复杂度O(logN)
 * @param int A[] 列表
 * @param int x 检索数
 * @param int N 列表总数
 * @return int
 */
int BinarySearch(const int A[], const int x, int N)
{
    int low, mid, high;
    
    low = 0;
    high = N - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(x < A[mid])
            high = mid - 1;
        else if(x > A[mid])
            low = mid + 1;
        else
            return mid;
    }
    return NotFound;
}
