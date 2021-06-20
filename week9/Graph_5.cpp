bool Graph::isReachable(int s, int d, list<int> *adj)
{
    if (s == d)
      return true;
   vector<int> visited(V,false);
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;
    while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (*i == d)
                return true;
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    return false;
}
