//Transpose of a matrix

#include<iostream>
#define N 3
using namespace std;

void transpose(int mat[N][N])
{
	int temp[N][N];
	for(int i=0;i<N;i++)

		for(int j=0;j<N;j++)
		temp[i][j]=mat[j][i];
		
		 for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           cout <<" "<< temp[i][j];
        cout <<"\n";
    }
}
int main()
{
	int mat[N][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };	
	transpose(mat);
	return 0;
	
}
