int	*ft_rrange(int start, int end)
{
	int i;
	int t;
	int *r;

	i = 0;
	t = end - start + 1;
	if (start> end)
		ft_rrange(end, start);
	r = malloc(t*sizeof(int));
	if(r){
		while(i < t)
		{
			r[i] = end;
			end--;
			i++;
		}
	}
	return(r);
}
