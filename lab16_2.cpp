#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char *&p,int N)
{
	p = new char;
	for(int i=0;i<N;i++){
		p[i] = 'A' + i;
	}
	p[N] = '\0';
}
int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
