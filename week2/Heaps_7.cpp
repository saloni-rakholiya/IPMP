class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int,vector<int>,greater<int>> mn;
    priority_queue<int,vector<int>> mx;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        mn.push(num);
        mx.push(mn.top());
        mn.pop();
        if(mx.size()-mn.size()>1){int t=mx.top();mx.pop();mn.push(t);}
    }
    
    double findMedian() {
        double ans;
        if(mx.size()>mn.size()) ans=mx.top();
        else if((mx.size()+mn.size())%2==0){
            ans=(double)(mx.top()+mn.top())/2;
        }
        else{
            ans=mx.top();
        }
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
