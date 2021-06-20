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
	
}
void shiftl(){
	
}
