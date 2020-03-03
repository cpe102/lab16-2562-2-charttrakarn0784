#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int N)
{
	vector<int> v(N);
	v.clear();
	for(int i=0;i<N;i++) 
	{
		v.push_back(rand()%10);
	}
	return v;
}
void showVector(vector<int> v)
{
	cout << "[ "; 
	for(int i=0;i<v.size();i++) cout << v[i] << " ";
	cout << "]";
}
int dotProduct(vector<int> v1,vector<int> v2)
{
	int sum=0;
	for(int i=0;i<v1.size();i++) sum += (v1[i]*v2[i]);
	return sum;
}
