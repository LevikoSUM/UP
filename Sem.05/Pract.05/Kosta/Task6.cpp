int longestDescendingSubArray(int arr[], int size)
{
	int maxLenght = 1;
	int currentLenght = 1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[i+1])
		{
			currentLenght++;
			if (currentLenght > maxLenght)
			{
				maxLenght = currentLenght;
			}
		}
		else
		{
			currentLenght = 1;
		}
	}
	return maxLenght;
}
