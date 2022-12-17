#include <iostream>
#include <iterator>
#include <map>
#include<vector>
using namespace std;


void findNum(vector<double>& ar, double sum,vector<vector<double> >& result, vector<double>& r,int i) {
	if (sum == 0) {
		result.push_back(r);
		return;
	}
	while (i < ar.size() && sum - ar[i] >= 0) {
		r.push_back(ar[i]); 
		findNum(ar, sum - ar[i], result, r, i);
		i++;
		r.pop_back();
	}
}

vector<vector<double> > combinationSum(vector<double>&ar, double sum) {
	sort(ar.begin(), ar.end());
	ar.erase(unique(ar.begin(), ar.end()), ar.end());
	vector<double> r;
	vector<vector<double> > result;
	findNum(ar, sum, result, r, 0);
	return result;
}


int main()
{
    map<string,vector<double>> a;
    vector<vector<double>> values = {{3,3,3,3,3,5,6},
                                     {2.5,2.5,2.5,2.5,4,4},
                                     {4 ,4, 4, 4 ,4, 4, 10},
                                     {1.5, 1.5 ,1.5 ,1.5 ,1.5 ,1.5, 1.5},
                                     {2, 2, 2 ,2, 2, 4 ,4}};
    vector<string> np = {"TOI","Hindu","ET","BM","HT"};
    for(int i = 0 ; i < 5; i++) a[np[i]] = values[i];
    int input;
    cin >> input;
}