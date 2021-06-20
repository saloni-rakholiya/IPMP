int find(int parent[], int i)
{
    while(i!=parent[i]
	i=parent[i];
	return i;
}

void Union(int parent[], int x, int y)
{
	x=find(parent,x);
	y=find(parent,y);
    parent[x] = y;
}
