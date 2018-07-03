#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()

{
	string str;
	cin>>str;
	cout << str<<endl;
	stack<char> st;
	int i = 0;
	while(i <= str.length())
	{
		char p = str.at(i++);
		switch(p)
			{
				case '(':
                                st.push(p);
				break;
				case ')':
				
						if(st.size()<1 || st.top()!='(')
						{
							cout <<"Invalid paranthasis\n";
							exit(-1);
						}
						else
							st.pop();
				break;
		         }

	}
	cout<<"valid paranthaesis \n";


}
