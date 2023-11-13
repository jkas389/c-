#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
	ElementType A[MAXN];
	int N, i;
	
	scanf("%d", &N);
	for ( i=0; i<N; i++ )
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));
	
	return 0;
}
/*
 * 求 N 个集合元素 A[] 的中位数，即序列中第 (N + 1) / 2 大的元素*/
// 按 gap 间隔对序列进行分组，直至 gap 为 1
// 向前查找当前待插元素的插入位置（直至找到比当前元素小的元素）
// 元素后移，为当前待插元素腾出空位
ElementType Median( ElementType A[], int N ){
	for (int gap = N; gap > 0; gap /= 2) {
			// 依次遍历每一组
		for (int i = gap; i < N; i++) {
			int cur = i;
			ElementType waitInsertVal = A[i];
			while (cur - gap >= 0 && A[cur - gap] - waitInsertVal > 0) {
				A[cur] = A[cur - gap];
				cur -= gap;
			}
			A[cur] = waitInsertVal;
		}
	}	
	return A[N / 2];
}
