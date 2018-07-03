#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()

{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	unordered_map<char,int> mp;
	for (int i = 0;i <s1.length();i++)
	{
		mp[s1.at(i)]++;
	}
        for (int i = 0;i <s2.length();i++)
        {
		int val = --mp[s2[i]];
                if(val ==  0)
			mp.erase(s2[i]);
        } 

	if(mp.size()==0)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;



}
