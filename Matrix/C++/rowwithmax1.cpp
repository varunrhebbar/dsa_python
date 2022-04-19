#include<iostream>
using namespace std;
#define R 3
#define C 3
int rowones(bool mat[R][C])
{
	int rowindex=-1;
	int maxcount=0;
	for(int i = 0 ; i < R ; i++)
	{
        int count = 0 ;
        for(int j = 0 ; j < C ; j++ )
		{
            if(mat[i][j] == 1)
			{
                count++ ;
        	}
        }
        if(count > maxcount)
		{
            maxcount = count ;
            rowindex = i ;
        }
	}
	return rowindex;
}
int main()
{
    bool mat[R][C] = { {0, 0, 0},
                    {0, 1, 1},
                    {1, 1, 1},
					};
 
    cout <<rowones(mat);
    
 
    return 0;
}


