#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(4,5);
	for(auto n: v)
	cout<<n<<" ";
	cout<<endl;
}
