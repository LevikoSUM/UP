bool isSymmetrical(int arr[], int size) 
{
	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1])
		{
			return false;
		}
	}
	return true;
}
