/**
 * _abs - Returns absolute value
 * Return: absolute value of n
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	return (n);
}