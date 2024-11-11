void intervalArray(int arr[], int size, int result[], int& resultSize, int a, int b)
{
	int currentSizeResult = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
		{
			result[currentSizeResult] = arr[i];
			currentSizeResult++;
		}
	}
	resultSize = currentSizeResult;
}
