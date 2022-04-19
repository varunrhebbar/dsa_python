//Traverse a matrix in snake pattern
#include<iostream>
#define M 3
#define N 3
using namespace std;

void snake(int mat[M][N])
{
	for (int i=0; i<M;i++)
	{
	if(i%2==0)
		{
			for(int j=0; j<N;j++)
			cout<<mat[i][j]<<" ";
			
		}
	else
		{
			for(int j = N-1 ; j>=0; j--)
				cout<<mat[i][j]<<" ";
		}
	}			
}
int main()
{
	int mat[M][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };	
	snake(mat);
	return 0;
	

}


