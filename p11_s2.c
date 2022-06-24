#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 21
int main(void)
{
	double x[N], y[N], z[N];
	int i;
	FILE* ifp, * ofp;
	ifp = fopen("data1.txt", "r");
	ofp = fopen("data2.csv", "w");
	fprintf(ofp, "z=x^3-100*x+50を計算するプログラムを作成し、csvファイル上に書き込む。\n");
	for (i = 0; i < N; i++)
	{
		fscanf(ifp, "%lf,%lf\n", &x[i], &y[i]);
		printf("x=%f,y=%f\n", x[i], y[i]);
		z[i] = (x[i] * x[i] * x[i]) - 100 * x[i] + 50;
		//printf(ofp, "x=%f, y=%f, z=%f¥n", x[i], x[i], z[i]);
		fprintf(ofp, "x=%f, y=%f, z=%f\n", x[i], y[i], z[i]);


	}
	fclose(ifp); fclose(ofp);
	return 0;
}