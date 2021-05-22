#include <stdio.h>
#include <string.h>

int main()
{
	int a[50], b[5], i, n = 0, x;
	printf("Enter 0 or 1 or 2 or 3 or 4 to end with -1\n");
	scanf("%d",&x);
	while (x!=-1)
	{
		if (x >= 0 && x <= 4) 
		{
			a[n] = x;
			n++;
		}
		scanf("%d", &x);
	}
	for (i=0;i<5;i++)
	{
		b[i] = 0;
	}
	for (i=1;i<n;i++)
	{
		b[a[i]]++;
	}
	for (i=1;i<=4;i++)
	{
		printf("%d : %d\n", i, b[i]);
	}
	return 0;
}

/**
Enter 0 or 1 or 2 or 3 or 4 to end with -1
1 2 0 1 0 3 1 2 4 2 1 4 4 4 3 1 0 2 2 1 1 1 -1
1 : 7
2 : 5
3 : 2
4 : 4
**/
