#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int list[] = {-2, 3, 1, -4, -5, 8, -3, 6, 2, 3, 0, -7, 1, 9, 2, -3, -6, 1, 5, 7};
    int max;
    
    max = MaxSubsequenceSum1(list, sizeof(list) / sizeof(list[0]));
    printf("1.Max is %d\n", max);
    max = MaxSubsequenceSum2(list, sizeof(list) / sizeof(list[0]));
    printf("2.Max is %d\n", max);
    max = MaxSubsequenceSum3(list, sizeof(list) / sizeof(list[0]));
    printf("3.Max is %d\n", max);
    max = MaxSubsequenceSum2(list, sizeof(list) / sizeof(list[0]));
    printf("4.Max is %d\n", max);
    
    return EXIT_SUCCESS;
}

/**
 * 最大子序列和问题解法1
 * 该方法为最慢的方法时间复杂度O(N³)
 * @param   int[]  A  序列数组
 * @param   int    N  序列总数
 * @return  int
 */
int  MaxSubsequenceSum1(const int A[], int N)
{
    int i, j, k, thisSum, maxSum = 0;
    
    for(i = 0; i < N; i++)
    {
        for(j = i; j < N; j++)
        {
            thisSum = 0;
            for(k = i; k <= j; k++)
                thisSum += A[k];
            if(thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

/**
 * 最大子序列和问题解法2
 * 该方法去除了方法1中的冗余逻辑，时间复杂度O(N²)
 * @param   int[]  A  序列数组
 * @param   int    N  序列总数
 * @return  int
 */
int  MaxSubsequenceSum2(const int A[], int N)
{
    int i, j, thisSum, maxSum = 0;
    
    for(i = 0; i < N; i++)
    {
        thisSum = 0;
        for(j = i; j < N; j++)
        {
            thisSum += A[j];
            if(thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

/**
 * 最大子序列和问题解法3
 * 该方法使用分治的方法，时间复杂度O(N logN)
 * @param   int[]  A  序列数组
 * @param   int    N  序列总数
 * @return  int
 */
int  MaxSubsequenceSum3(const int A[], int N)
{
    
}
