void removeDifferentFromIndexValues(int arr[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		int currentElement = arr[i];
		bool digitEqualsIndex = false;
		while (currentElement > 0)
		{
			int digit = currentElement % 10;
			currentElement /= 10;
			if (digit == i) 
			{
				digitEqualsIndex = true;
				break;
			}
		}
		if (digitEqualsIndex)
		{
			continue;
		}
		arr[i] = 0;
	}
}
