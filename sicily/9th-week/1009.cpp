#include <stdio.h>
int main() {
    int n, i, j;
    long a[210];
    long t;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - 1; j++) {
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t; 
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%ld\n", a[i]);
    }
    return 0;   
}