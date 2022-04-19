// max element in a row

#include<iostream>
using namespace std;
int  r = 3;	
int  c = 3;	

void display(int result[], int c)
{
	int i;
	for(i = 0; i < c; i++)
	{
		cout << result[i] << " "<<endl;
	}
}

void max(int mat[3][3], int r, int c)
{
	int i = 0;
	int max = 0;
	int result[r];
	while (i < r)
	{
		for ( int j = 0; j < c; j++)
		{
			if (mat[i][j] > max)
			{
			max = mat[i][j];
			}
		}
	result[i] = max;
	max = 0;
	i++;	
	}
	display(result, r);
}
int main()
{
	int i, j;
	int mat[3][3]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };
	max(mat,r,c);
	return 0;
}
