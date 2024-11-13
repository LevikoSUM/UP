const int SIZE = 4;
bool isMatrixMagic(int matrix[SIZE][SIZE])
{
	int sum = 0;
	int checkSum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += matrix[0][i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			checkSum += matrix[i][j];
		}
		if (checkSum != sum)
		{
			return false;
		}
		checkSum = 0;
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			checkSum += matrix[j][i];
		}
		if (checkSum != sum)
		{
			return false;
		}
		checkSum = 0;
	}
	for (int i = 0; i < SIZE; i++)
	{
		checkSum += matrix[i][i];
	}
	if (checkSum != sum)
	{
		return false;
	}
	checkSum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		checkSum += matrix[i][SIZE - i - 1];
	}
	if (checkSum != sum)
	{
		return false;
	}
	return true;
}
