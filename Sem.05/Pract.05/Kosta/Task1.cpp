double averageArray(int arr[], int size, int& closest)
{
    double average = 0;
	for (int i = 0; i < size; i++)
	{
		average += arr[i];
	}
	average /= size;
	double difference = average - arr[0];
	if (difference < 0)
	{
		difference *= -1;
	}
	for (int i = 1; i < size; i++)
	{
		int currentDifference = average - arr[i];
		if (currentDifference < 0)
		{
			currentDifference *= -1;
		}
		if (currentDifference < difference)
		{
			difference = currentDifference;
			closest = arr[i];
		}
	}
	return average;
}
