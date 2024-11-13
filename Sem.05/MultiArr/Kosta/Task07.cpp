const int SIZE = 4;
void sumOfMatrix(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void multiplyMatrixByNumber(int matrix[SIZE][SIZE], int number, int result[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i][j] = matrix[i][j] * number;
		}
	}
}
