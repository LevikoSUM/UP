const int SIZE = 3;
void transposeMatrix(int matrix[SIZE][SIZE]) 
{
	int swap;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < i; j++)
		{	
			swap = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = swap;
		}
	}
}
