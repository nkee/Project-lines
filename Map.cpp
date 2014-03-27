#include "Map.h"


Map::Map(void)
{
//	int size=150;
}


Map::~Map(void)
{
}


void Map::line()
{
	if(lin[0][2].type==-1)
	{
		if(lin[0][0].type==lin[0][1].type==lin[0][2].type==lin[0][3].type==lin[0][4].type)
			{
				lin[0][0].Clean();
				lin[0][1].Clean();
				lin[0][2].Clean();
				lin[0][3].Clean();
				lin[0][4].Clean();
			}
		else if(lin[0][0].type==lin[0][1].type==lin[0][2].type==lin[0][3].type)
		{
				lin[0][0].Clean();
				lin[0][1].Clean();
				lin[0][2].Clean();
				lin[0][3].Clean();
		}
		else if(lin[0][1].type==lin[0][2].type==lin[0][3].type==lin[0][4].type)
			{
				lin[0][1].Clean();
				lin[0][2].Clean();
				lin[0][3].Clean();
				lin[0][4].Clean();
			}
		else if(lin[0][0].type==lin[0][1].type==lin[0][2].type)
		{
				lin[0][0].Clean();
				lin[0][1].Clean();
				lin[0][2].Clean();
		}
		else if(lin[0][1].type==lin[0][2].type==lin[0][3].type)
		{
				lin[0][1].Clean();
				lin[0][2].Clean();
				lin[0][3].Clean();
		}
		else if(lin[0][2].type==lin[0][3].type==lin[0][4].type)
		{
				lin[0][2].Clean();
				lin[0][3].Clean();
				lin[0][4].Clean();
		}
	}
		//2 kbybz
		if(lin[4][2].type==-1)
	{
		if(lin[4][0].type==lin[4][1].type==lin[4][2].type==lin[4][3].type==lin[4][4].type)
			{
				lin[4][0].Clean();
				lin[4][1].Clean();
				lin[4][2].Clean();
				lin[4][3].Clean();
				lin[4][4].Clean();
			}
		else if(lin[4][0].type==lin[4][1].type==lin[4][2].type==lin[4][3].type)
		{
				lin[4][0].Clean();
				lin[4][1].Clean();
				lin[4][2].Clean();
				lin[4][3].Clean();
		}
		else if(lin[4][1].type==lin[4][2].type==lin[4][3].type==lin[4][4].type)
			{
				lin[4][1].Clean();
				lin[4][2].Clean();
				lin[4][3].Clean();
				lin[4][4].Clean();
			}
		else if(lin[4][0].type==lin[4][1].type==lin[4][2].type)
		{
				lin[4][0].Clean();
				lin[4][1].Clean();
				lin[4][2].Clean();
		}
		else if(lin[4][1].type==lin[4][2].type==lin[4][3].type)
		{
				lin[4][1].Clean();
				lin[4][2].Clean();
				lin[4][3].Clean();
		}
		else if(lin[4][2].type==lin[4][3].type==lin[4][4].type)
		{
				lin[4][2].Clean();
				lin[4][3].Clean();
				lin[4][4].Clean();
		}
		}
		// паралельная линия
		if(lin[2][0].type==-1)
	{
		if(lin[0][0].type==lin[1][0].type==lin[2][0].type==lin[3][0].type==lin[4][0].type)
			{
				lin[0][0].Clean();
				lin[1][0].Clean();
				lin[2][0].Clean();
				lin[3][0].Clean();
				lin[4][0].Clean();
			}
		else if(lin[0][0].type==lin[1][0].type==lin[2][0].type==lin[3][0].type)
		{
				lin[0][0].Clean();
				lin[1][0].Clean();
				lin[2][0].Clean();
				lin[3][0].Clean();
		}
		else if(lin[1][0].type==lin[2][0].type==lin[3][0].type==lin[4][0].type)
			{
				lin[1][0].Clean();
				lin[2][0].Clean();
				lin[3][0].Clean();
				lin[4][0].Clean();
			}
		else if(lin[0][0].type==lin[1][0].type==lin[2][0].type)
		{
				lin[0][0].Clean();
				lin[1][0].Clean();
				lin[2][0].Clean();
		}
		else if(lin[1][0].type==lin[2][0].type==lin[3][0].type)
		{
				lin[1][0].Clean();
				lin[2][0].Clean();
				lin[3][0].Clean();
		}
		else if(lin[2][0].type==lin[3][0].type==lin[4][0].type)
		{
				lin[2][0].Clean();
				lin[3][0].Clean();
				lin[4][0].Clean();
		}
		}
		
		//last line
		if(lin[2][4].type==-1)
	{
		if(lin[0][4].type==lin[1][4].type==lin[2][4].type==lin[3][4].type==lin[4][4].type)
			{
				lin[0][4].Clean();
				lin[1][4].Clean();
				lin[2][4].Clean();
				lin[3][4].Clean();
				lin[4][4].Clean();
			}
		else if(lin[0][4].type==lin[1][4].type==lin[2][4].type==lin[3][4].type)
		{
				lin[0][4].Clean();
				lin[1][4].Clean();
				lin[2][4].Clean();
				lin[3][4].Clean();
		}
		else if(lin[1][4].type==lin[2][4].type==lin[3][4].type==lin[4][4].type)
			{
				lin[1][4].Clean();
				lin[2][4].Clean();
				lin[3][4].Clean();
				lin[4][4].Clean();
			}
		else if(lin[0][4].type==lin[1][4].type==lin[2][4].type)
		{ 
				lin[0][4].Clean();
				lin[1][4].Clean();
				lin[2][4].Clean();
		}
		else if(lin[1][4].type==lin[2][4].type==lin[3][4].type)
		{
				lin[1][4].Clean();
				lin[2][4].Clean();
				lin[3][4].Clean();
		}
		else if(lin[2][4].type==lin[3][4].type==lin[4][4].type)
		{
				lin[2][4].Clean();
				lin[3][4].Clean();
				lin[4][4].Clean();
		}
		}
	
	
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
	{
		if(lin[i][j].type!=-1)
		{
			if(lin[i][j].type==lin[i-1][j].type)
			{
				if(lin[i][j].type==lin[i+1][j].type)
				{
				
				if(i+2!=5 && lin[i][j].type==lin[i+2][j].type)
				{
				if(i-2!=-1 && lin[i][j].type==lin[i-2][j].type)
				{
					lin[i][j].Clean();
					lin[i+1][j].Clean();
					lin[i-1][j].Clean();
					lin[i+2][j].Clean();
					lin[i-2][j].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i+1][j].Clean();
					lin[i-1][j].Clean();
					lin[i+2][j].Clean();
				}
				}
				
				else if(i-2!=-1 && lin[i][j].type==lin[i-2][j].type)
				{
					lin[i][j].Clean();
					lin[i+1][j].Clean();
					lin[i-1][j].Clean();
					lin[i-2][j].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i+1][j].Clean();
					lin[i-1][j].Clean();
				}
				

				}
				
					
				
				else if(i-2!=-1 && lin[i][j].type==lin[i-2][j].type)
				{
					lin[i][j].Clean();
					lin[i-1][j].Clean();
					lin[i-2][j].Clean();
			    }
			}
				
				else if(i+2!=5 && lin[i][j].type==lin[i+2][j].type)
				{
					lin[i][j].Clean();
					lin[i+1][j].Clean();
					lin[i+2][j].Clean();
				}
			
//j

			if(lin[i][j].type!=-1)
		{
			if(lin[i][j].type==lin[i][j-1].type)
			{
				if(lin[i][j].type==lin[i][j+1].type)
				{
				
				if(j+2!=5 && lin[i][j].type==lin[i][j+2].type)
				{
				if(j-2!=-1 && lin[i][j].type==lin[i][j-2].type)
				{
					lin[i][j].Clean();
					lin[i][j+1].Clean();
					lin[i][j-1].Clean();
					lin[i][j+2].Clean();
					lin[i][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i][j+1].Clean();
					lin[i][j-1].Clean();
					lin[i][j+2].Clean();
				}
				}
				
				else if(j-2!=-1 && lin[i][j].type==lin[i][j-2].type)
				{
					lin[i][j].Clean();
					lin[i][j+1].Clean();
					lin[i][j-1].Clean();
					lin[i][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i][j+1].Clean();
					lin[i][j-1].Clean();
				}
				

				}
				
					
				
				else if(j-2!=-1 && lin[i][j].type==lin[i][j-2].type)
				{
					lin[i][j].Clean();
					lin[i][j-1].Clean();
					lin[i][j-2].Clean();
			    }
			}
				
				else if(j+2!=5 && lin[i][j].type==lin[i][j+2].type)
				{
					lin[i][j].Clean();
					lin[i][j+1].Clean();
					lin[i][j+2].Clean();
				}

//ij+
	if(lin[i][j].type!=-1)
		{
			if(lin[i][j].type==lin[i-1][j-1].type)
			{
				if(lin[i][j].type==lin[i+1][j+1].type)
				{
				if(j+2!=5 && i+2!=5 && lin[i][j].type==lin[i+2][j+2].type)
				{
				if(j-2!=-1 && i-2!=-1 && lin[i][j].type==lin[i-2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i+1][j+1].Clean();
					lin[i-1][j-1].Clean();
					lin[i+2][j+2].Clean();
					lin[i-2][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i+1][j+1].Clean();
					lin[i-1][j-1].Clean();
					lin[i+2][j+2].Clean();
				}
				}
				
				else if(j-2!=-1 && i-2!=-1 && lin[i][j].type==lin[i-2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i+1][j+1].Clean();
					lin[i-1][j-1].Clean();
					lin[i-2][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i+1][j+1].Clean();
					lin[i-1][j-1].Clean();
				}
				

				}
				
					
				
				else if(j-2!=-1 && i-2!=-1 && lin[i][j].type==lin[i-2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i-1][j-1].Clean();
					lin[i-2][j-2].Clean();
			    }
			}
				
				else if(j+2!=5 && i+2!=5 && lin[i][j].type==lin[i+2][j+2].type)
				{
					lin[i][j].Clean();
					lin[i+1][j+1].Clean();
					lin[i+2][j+2].Clean();
				}

//ij- 
	if(lin[i][j].type!=-1)
		{
			if(lin[i][j].type==lin[i+1][j-1].type)
			{
				if(lin[i][j].type==lin[i-1][j+1].type)
				{
				
				if(j+2!=5 && i-2!=-1 && lin[i][j].type==lin[i-2][j+2].type)
				{
				if(j-2!=-1 && i+2!=5 && lin[i][j].type==lin[i+2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i-1][j+1].Clean();
					lin[i+1][j-1].Clean();
					lin[i-2][j+2].Clean();
					lin[i+2][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i-1][j+1].Clean();
					lin[i+1][j-1].Clean();
					lin[i-2][j+2].Clean();
				}
				}
				
				else if(j-2!=-1 && i+2!=5 && lin[i][j].type==lin[i+2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i-1][j+1].Clean();
					lin[i+1][j-1].Clean();
					lin[i+2][j-2].Clean();
				}
				else
				{
					lin[i][j].Clean();
					lin[i-1][j+1].Clean();
					lin[i+1][j-1].Clean();
				}
				

				}
				else if(j-2!=-1 && i+2!=5 && lin[i][j].type==lin[i+2][j-2].type)
				{
					lin[i][j].Clean();
					lin[i+1][j-1].Clean();
					lin[i+2][j-2].Clean();
			    }
			}
				
				else if(j+2!=5 && i-2!=-1 && lin[i][j].type==lin[i-2][j+2].type)
				{
					lin[i][j].Clean();
					lin[i-1][j+1].Clean();
					lin[i-2][j+2].Clean();
				}
//vse
	}
	}	
	}
	}
	}
	}
	}
	
	bool Map::random()
{
	bool real = false;
	for(int i = 0;i < 5; i++)
	{
		for(int j = 0; j<5 ;j++)
		{
			if(lin[i][j].type==-1)
			{
				real = true;
			}
		}
	}
	{
	if(real ==true)
	{
	int i=0;
	bool e;
	while(i!=4)
	{
	e = false;
	while (!e)
	{
		int q = rand()%5+1;
		int w = rand()%5+1;
		if(lin[q][w].type==-1)
	{
		lin[q][w].Init();
		e=true;
		}
	}
	}
	return true;
}
	else
	{
  return false;
	}
	}
	}
	
	void SearchWay(int x, int y, int x_to, int y_to, int map[5][5])
{
	const int size = 5;
	int matrix[size][size][3];

	int step;
	bool added=true,result=true;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(map[i][j]!=0)
			{
				matrix[i][j][0] = -2;
			}
			else
			{
				matrix[i][j][0] = -1;
			}
		}
	}
	matrix[x_to][y_to][0]= 0;
	step = 0; 

	while(added && matrix[x][y][0]==-1)
	{
		added = false;
		step++;

		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{			
				if(matrix[i][j][0]== step-1)
				{
					int _i,_j;
					_i=i+1;_j=j;		
					if(_i>=0 && _j>=0 && _i<size && _j<size)
					{
						 if(matrix[_i][_j][0]==-1 && matrix[_i][_j][0]!=-2)
						 {
							 matrix[_i][_j][0]= step; 
							 matrix[_i][_j][1]= i; 
							 matrix[_i][_j][2]= j; 
							 added = true; 						 }
					}
					_i=i-1;_j=j;
					
					if(_i>=0 && _j>=0 && _i<size && _j<size)
					{
						
						if(matrix[_i][_j][0]==-1 && matrix[_i][_j][0]!=-2)
						{
							matrix[_i][_j][0]= step; 
							matrix[_i][_j][1]= i; 
							matrix[_i][_j][2]= j; 
							added = true; 
						}
					}
					_i=i;_j=j+1;
					
					if(_i>=0 && _j>=0 && _i<size && _j<size)
					{
						 
						if(matrix[_i][_j][0]==-1 && matrix[_i][_j][0]!=-2)
						{
							matrix[_i][_j][0]= step; 
							matrix[_i][_j][1]= i; 
							matrix[_i][_j][2]= j; 
							added = true; 
						}
					}
					_i=i;_j=j-1;
					
					if(_i>=0 && _j>=0 && _i<size && _j<size)
					{
						
						if(matrix[_i][_j][0]==-1 && matrix[_i][_j][0]!=-2)
						{
							matrix[_i][_j][0]= step; 
							matrix[_i][_j][1]= i; 
							matrix[_i][_j][2]= j; 
							added = true; 
						}
					}
				}
			}
		}
	}

	if(matrix[x][y][0]== -1)
	{
		result = false;
	}


	if(result)
	{
		int _i=x,_j=y;

		while(matrix[_i][_j][0]!=0)
		{	

	
			int li = matrix[_i][_j][1];
			int lj = matrix[_i][_j][2];
			_i=li;_j=lj;
		}
	}
}


	void Map::Move(float x, float y, float z, Cell current, Cell future)
{
	int map[5][5];
	int x_to, y_to, x1, y1;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(lin[i][j].type!=-1)
			{
				map[i][j]=1;
			}
			else if(mas[i][j].ulcorner==current.ulcorner)
			{
				x1=i;
				y1=j;
			}
			else if(mas[i][j].ulcorner==future.ulcorner)
			{
				x_to=i;
				y_to=j;
			}
			else
			{
				map[i][j]=0;
			}
			}
		}
	SearchWay(x1,y1,x_to,y_to, map);
	
}
