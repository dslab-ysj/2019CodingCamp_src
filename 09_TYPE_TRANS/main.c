/******************************************************************************
 *
 * Copyright 2019 Barun Corechips All Rights Reserved
 *
 * Project : 09_TYPE_TRANS
 * Filename : main.c
 * Author : sj.yang
 * Version : 1.0
 *
 *******************************************************************************/

#include <stdio.h>

int main(void)
{
	double num1 = 100; //���� 100�� double������ �ڵ� �� ��ȯ
	int num2=3.1415; // double�� �Ǽ� 3.1415�� int������ �ڵ� �� ��ȯ

	printf("\n���� 100�� �Ǽ��� : %.5f \n", num1);
 	printf("�Ǽ� 3.1415�� ������ : %d\n", num2);

	return 0;
}
