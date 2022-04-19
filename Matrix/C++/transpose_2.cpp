// Transpose without extra space
#include<iostream>
#define N 4
using namespace std;

void trans(int mat[4][4])
{
	for(int i=0;i<N;i++)
		for(int j=i+1;j<N;j++)
		swap (mat[i][j],mat[j][i]);
		
		for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           cout <<" "<< mat[i][j];
        cout <<"\n";
	
	}
}	
int main()
{
	int mat[N][N]={
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}
					
				  };	
	trans(mat);
	return 0;
	
}

