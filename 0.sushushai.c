/*************************************************************************
	> File Name: 0.sushushai.c
	> Author: liuyan
	> Mail:1989992012@qq.com
	> Created Time: 2019年05月04日 星期六 14时34分03秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};

int main() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;//当素数访问到i，我们还没有处理到i
            //printf("%d\n", i);
        prime[++prime[0]] = i;
    }
    int n;
    while (~scanf("%d", &n)) {
        printf("%d\n", prime[n]);
        
    }
    return 0;
}
