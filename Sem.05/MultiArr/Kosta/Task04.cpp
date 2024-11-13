const int SIZE = 3;
bool isMatrixTriangle(int matrix[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i > j)
			{
				if (matrix[i][j] != 0)
				{
					return false;
				}
			}
		}
	}
	return true;
}
