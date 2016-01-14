/* 
 * 计算最大公约数——欧几里得算法
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * 主函数
 * @return int
 */
int main(void)
{
    int result;
    int M = 28690;
    int N = 14950;
    
    result = God(M, N);
    printf("%d %d %d", M, N, result);
    
    return (EXIT_SUCCESS);
}

/**
 * 欧几里得算法
 * 时间复杂度O(logN)
 * @param unsigned int M 数字1
 * @param unsigned int N 数字2
 * @return int
 */
int God(unsigned int M, unsigned int N)
{
    unsigned int rem;
    
    while(N > 0)
    {
        rem = M % N;
        M = N;
        N = rem;
    }
    return M;
}
