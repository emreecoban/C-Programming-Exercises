#include <stdio.h>
#define ROW 2
#define COL 2

int main()
{
	
	int i, j;
	int matrixA[ROW][COL], matrixB[ROW][COL], sum[ROW][COL] = {0};
	
	for (i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("please enter a value for [%d][%d]:", i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("\n\n");
	for (i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("please enter a value for [%d][%d]:", i+1,j+1);
			scanf("%d",&matrixB[i][j]);
		}
	}
	for (i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			sum[i][j]=matrixA[i][j]+matrixB[i][j];
		}
	}
	
	printf("\n\n");
	printf("Sum:\n");
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
