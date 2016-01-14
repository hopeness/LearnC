/* 
 * 幂运算
 */

#include <stdio.h>
#include <stdlib.h>

long int Pow(long int X, unsigned int N);

/**
 * 主函数
 * @return int
 */
int main(void)
{
    long int result;
    long int X = 2;
    unsigned int N = 10;
    
    result = Pow(X, N);
    printf("%d %d %d", X, N, result);
    
    return EXIT_SUCCESS;
}

/**
 * 幂运算
 * 时间复杂度O(logN)
 * @param long int X 数字1
 * @param unsigned int N 数字2
 * @return int
 */
long int Pow(long int X, unsigned int N)
{
    if(N == 0)
        return 1;
    else if(N == 1)
        return X;
    else if(N % 2 == 0)
        return Pow(X * X, N / 2);
    else
        return Pow(X * X, N / 2) * X;
}