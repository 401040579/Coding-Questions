#include <stdio.h>
#include <time.h>
#define FIB_N 50

int fib(int n)
{
    int a,b,c;
    int arr[50];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i<=n; ++i)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int fib_re(int n)
{
    if(n==0) return 0;
    
    if(n==1) return 1;
    
    return fib_re(n-1)+fib_re(n-2);
}

// 0 1 1 2 3 5 8

int main()
{
    time_t t_start, t_end;
    
    t_start = time(NULL) ;
    printf("answer: %d\n", fib(FIB_N));
    t_end = time(NULL) ;
    printf("time of fib: %.0f s\n", difftime(t_end,t_start)) ;
    
     t_start = time(NULL) ;
    printf("answer: %d\n", fib_re(FIB_N));
    t_end = time(NULL) ;
    printf("time of fib_re: %.0f s\n", difftime(t_end,t_start)) ;
    return 0;
}
