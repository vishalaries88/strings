#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc , char* argv[])
{

	vector<int> vec;
	int match = 0;
	int target = atoi(argv[1]);
	while(match!=1){
	cout<<"Target looking for"<<target<<endl;
	for(int i =0;i<20;i++)
	{
		vec.push_back(rand() % 100);	
	}	

	for(auto i : vec)
	{
		cout<<i<<endl;
	}
	sort(vec.begin(),vec.end());
	cout<<"Sorted Vector"<<endl;
        for(auto i : vec)
        {
                cout<<i<<endl;
        }
	
	int j =vec.size()-1;
	int i =0;
	while(i<j)
	{
		if(vec[i]+vec[j]>target)
			{
				j--;
			}
                else if(vec[i]+vec[j]<target)
                        {
                                i++;
                        }
		else
			{
			 match = 1;
			 cout<<"MAtch found at "<<vec[i]<<" "<<vec[j]<<endl;
			 exit(0);
			}
	}
	
}
}
