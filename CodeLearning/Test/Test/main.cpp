#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <time.h>

using namespace std;

clock_t start, stop;
double duration;

class Sort 
{
public:
	void sort(vector<int> &vi);
	bool less(int &v, int &w);
	void exch(int &i, int &j);
	void show(int &a);
	bool isSorted(vector<int> &vi);
	void input(vector<int> &vi);
};

int main()
{
	start = clock();



	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	cout << duration << endl;

	return 0;
}