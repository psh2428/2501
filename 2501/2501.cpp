﻿#define _CRT_SECURE_NO_WARNINRGS
#include <stdio.h>

void main() {
	int n, k, i;
	int cnt = 0;
	scanf_s("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
			if (cnt == k)
				break;
		
		}
	}
	if (i <= n)
		printf("%d", i);
	else 
		printf("0");
	
}