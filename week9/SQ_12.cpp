vector<int> arr(1000);
int t1=-1; int t2=1000; 
int start=mid,end=mid;

void push1(int x)
{
	t1++;
	if(t1>=start) shiftr();
	arr[t1]=x;
}
void push2(int x)
{
	t2--;
	if(t2<=end) shiftl();
	arr[t2]=x;
}

void push3(int x)
{
	end++;
	arr[end]=x;
	
}

int pop1()
{
	int x=arr[t1];
	t1--;
	return x;
}

int pop2()
{
	int x=arr[t2];
	t2--;
	return x;
}

int pop3()
{
	int x=arr[end--];
	return x;
}

void shiftr(){
	int avail=t2-start-1;
	int offset=(avail-(start-end+1))/2;
	vector<int> a;
	for(int i=start;i<=end;++i)
	{
		a.push_back(arr[i]);
	}
	
	int x=0;
	for(int i=t1+offset;i<=t1+offset+(start-end+1);++i)
	arr[i]=a[x++];
}
void shiftl(){
	int avail=end-t1-1;
	int offset=(avail-(start-end+1))/2;
	
	vector<int> a;
	for(int i=start;i<=end;++i)
	{
		a.push_back(arr[i]);
	}
	
	int x=0;
	for(int i=t1+offset;i<=t1+offset+(start-end+1);++i)
	arr[i]=a[x++];
}
