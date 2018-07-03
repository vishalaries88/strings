#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()

{
	vector<int> vec{11,23,34,9,7,0,0,1,23,8,5,2,5,4,4,3};
	int i = 0;
//	for(auto j : vec)
//		cout<<j<<",";
	cout<<endl;
	sort(vec.begin(),vec.end());
	cout<<"Sorted array\n";	
        for(auto j : vec)
{
		cout<<j<<",";
}


	int start=0;
	int product = 1,product_prev=1;
	while(start<vec.size()-3)
	{	
		product*=(vec[start]*vec[start+1]*vec[vec.size()-1]);
		if(product> product_prev)
			product_prev = product;
	}
	(product >= product_prev)?cout<<product:cout<<product_prev;

	

}
