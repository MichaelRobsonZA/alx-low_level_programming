/**
 * helper - helps find the natural square root of a number
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: the natural square root of the number, -1 otherwise
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root of the number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}
