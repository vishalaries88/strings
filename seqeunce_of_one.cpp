#include<iostream>
#include<vector>
using namespace std;
int main()

{
	vector<bool> vec{0,0,0,0,1,0,1,0,0,1,1,0,0,0,0,1,1,0,1,0,1,0,0,0,1};
	int i = 0;
	while(i++ <1000000)
		vec.push_back(rand() %2);
//	for(auto j : vec)
//		cout<<j<<",";
//	cout<<endl;
	int start=0;
	int total = 0,total_prev=0;
	while(start<vec.size())
	{	
		if(vec[start]==0)
		{
			total++;
		}
		else
		{
			if(total > total_prev)
				total_prev = total;
			total = 0;
		
		}
		start++;
		
	}
	if(total>total_prev)
		cout<<total;
	else
		cout<<total_prev;

	

}
