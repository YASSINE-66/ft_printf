int numlen (int n)
{
    int count;
    count = 0;
    if (n == 0)
		return (1);
    if (n < 0) 
	    count = 1;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}