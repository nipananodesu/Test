#include <iostream>
#include <string>

using namespace std;


int main()
{
	string word1;
	string word2;
	while (getline(cin,word1))
		while(getline(cin,word2))
		cout << word1+word2 << endl;

	return 0;
}