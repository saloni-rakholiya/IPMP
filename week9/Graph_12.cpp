int find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent= find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}

void Union(struct subset subsets[], int xroot, int yroot)
{
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
 
