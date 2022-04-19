//Matrix multiplication
#include <iostream>
#define N 3
using namespace std;

void multiply(int mat1[][N], int mat2[][N],	int res[][N])
{
	int i, j, k;
	for (i = 0; i < N; i++)
	 {
		for (j = 0; j < N; j++) 
		{
			res[i][j] = 0;
			for (k = 0; k < N; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

int main()
{
	int i, j;
	int res[N][N]; 
	
	int mat1[N][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };	


	int mat2[N][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };	

	multiply(mat1, mat2, res);

	cout << "Result "<<endl;
	for (i = 0; i < N; i++) 
	{
		for (j = 0; j < N; j++)
			cout << res[i][j]<<"     ";
			cout<<"\n";
	}

	return 0;
}


