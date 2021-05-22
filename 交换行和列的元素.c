//交换行和列的元素

int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} }, i, j;
	int b[3][2];
	printf("数组a：\n");
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%d ", a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	printf("\n");
	printf("数组b：\n");
	for (i=0;i<=2;i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%d ", b[i][j]);
		}
	}

	return 0;
}
