// Median in an matrix

#include<bits/stdc++.h>
#define N 3
using namespace std;

int median(int mat[N][N],int r, int c)

{
	int max=0;
	int min=0;
	
	for(int i=0;i<r;i++)
	{
		if(mat[i][0]<min)		//min element
			min=mat[i][0];
		
		if(mat[i][c-1]>max)		//max element
			max=mat[i][c-1];
		
	}
	
	int avg=((r*c)+1)/2;
	while(min<max)
	{
		int mid=(min+max)/2;
		int temp=0;				//stores element less than mid
		
		for(int i=0;i<r;i++)
			temp+=upper_bound( mat[i], mat[i]+c, mid) - mat[i]; 		//its like a vecor sort
			if(temp<avg)
				min=mid+1;
			else
				max=mid;
		}
		return min;
			
}

int main()
{
	int r=3, c=3 ;
		int mat[N][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };
	median(mat,r,c);
	cout<<median(mat,r,c)<<endl;
	return 0;			  
}

