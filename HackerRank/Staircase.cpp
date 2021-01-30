/** Problem link: https://www.hackerrank.com/challenges/staircase/problem **/

#include<cstdio>

void sazol();

int main()
{
    sazol();
    return 0;
}

void sazol() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 1 - i; ++j) {
            printf(" ");
        }
        for(int j = 0; j <= i; ++j) {
            printf("#");
        }
        puts("");
    }
}
