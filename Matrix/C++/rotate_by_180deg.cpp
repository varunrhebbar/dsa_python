// Rotate matrix by 180 deg with auxillary space


#include<iostream>
#define N 3
using namespace std;

void reverse(int mat[N][N])
{
	for (int i = N-1; i>=0;i--)
	{


		for(int j=N-1;j>=0;j--)
           cout <<" "<< mat[i][j];
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
	reverse(mat);
	return 0;
	
}
