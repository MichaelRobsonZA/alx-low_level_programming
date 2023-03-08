/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
    return helper(0, n, n);
}

int helper(int start, int end, int n)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            return helper(mid + 1, end, n);
        else
            return helper(start, mid - 1, n);
    }
    else
    {
        return -1;
    }
}
