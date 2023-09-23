#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *p, int *q, int *m, int *n) ;

int main() {
	//准备工作
	system("color e");
	int a[11] = {0}, b[11] = {1};                       //初始化,a[]代表所有人的初始楼层，只使用1到10的元素
	int i, t, m, n, cnt;                                //初始化,b[]代表所有人的目标楼层，只使用1到10的元素

	printf("请输入乘坐电梯的人数:\n");
	scanf("%d", &cnt);
	printf("请分别输入这%d人的所在楼层和目的楼层：\n", cnt);
	for (i = 1; i <= cnt; i++) {                        //记录乘电梯的人的情况
		scanf("%d %d", &m, &n);
		a[i] = m;
		b[i] = n;
	}
	for (i = 1; i <= cnt; i++) {
		for (int j = i + 1; j <= cnt; j++) {            //排序这些人初始楼层，目的楼层与人对应
			swap(&a[i], &a[j], &b[i], &b[j]);
		}
	}
	int time = 0;
	//电梯运行
	printf("1 0 0\n");
	for (i = 1; i <= 2 * cnt; i++) {

		if (i % 2 == 1) {
			time += abs(a[(i + 1) / 2] - b[(i + 1) / 2 - 1]);
			printf("%d %d 1\n", a[(i + 1) / 2], time);
		}
		if (i % 2 == 0) {
			time += abs(b[i / 2] - a[i / 2]);
			printf("%d %d 0\n", b[i / 2], time);
		}
	}
	return 0;
}

void swap(int *p, int *q, int *m, int *n) {
	int t;
	if (*p > *q) {
		t = *p;
		*p = *q;
		*q = t;                       //对两个数进行从小到大的排序
		t = *m;
		*m = *n;
		*n = t;
	}
}
