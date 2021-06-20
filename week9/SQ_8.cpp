class LRUCache
{
    private:
int k;  unordered_map<int,int> mp;  list<int> q;
unordered_map<int,list<int>::iterator> pos;
    public:
    LRUCache(int cap)
    {
      k=cap;
    }
     int get(int key)
    {
        if(mp.find(key)==mp.end()) return -1;
        auto i=pos[key];
        q.erase(i);
        q.push_front(key);
        pos[key]=q.begin();
        return mp[key];
    }

     void set(int key, int value)
    {
        if(mp.find(key)!=mp.end())
        {
        auto i=pos[key];
        q.erase(i);
        q.push_front(key);
        pos[key]=q.begin();
        mp[key]=value;
        }
        else if(q.size()==k)
        {
            int a=q.back();
            q.pop_back();
            q.push_front(key);
            pos[key]=q.begin();
            mp[key]=value;
            mp.erase(a);
        }
        else {
            mp[key]=value;
            q.push_front(key);
            pos[key]=q.begin();
        }
    }
};
