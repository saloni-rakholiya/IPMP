vector <int> rotate (int n, unsigned int d)
        {
            vector<int> ans(2);
            int x=16-d;
            ans[0]= n<<d|n>>x;
            ans[1]= n>>d|(n<<x);
            return ans;
        }
