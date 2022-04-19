//Search an element in matrix.

#include<iostream>
#define N 4
using namespace std;

void search(int mat[N][N],int n,int x)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		if(mat[i][j]==x)
		{
			cout<<"Element found at position"<<endl;
			cout<<i<<j<<endl;
			return;
		
		}
			
	}
	cout<<"Element not found";	
	
}
int main()
{
	int n=4;
	int x=16;
	int mat[N][N]={
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}
					
				  };	
	search(mat,n,x);
	
}
