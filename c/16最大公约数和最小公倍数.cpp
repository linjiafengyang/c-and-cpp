#include <stdio.h>
int main() {
	int a, b, t, r;
	printf("请输入两个数字：\n");
	scanf("%d%d", &a, &b);
	if(a < b) {
		t = b;
		b = a;
		a = t;
	}
	int n = a * b;
	r = a % b;
	while(r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	printf("最大公约数是%d，最小公倍数是%d\n", b, n / b);
	return 0;
}
