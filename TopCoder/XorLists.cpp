#include<bits/stdc++.h>
using namespace std;

struct XorLists{
int countLists(vector <int> s, int m)
{
    int ret;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10000; int Arg2 = 10001; verify_case(0, Arg2, countLists(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10000; int Arg2 = 0; verify_case(1, Arg2, countLists(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {0,1,2,
 1,0,3,
 2,3,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; int Arg2 = 4; verify_case(2, Arg2, countLists(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {0,3,
 3,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; int Arg2 = 2; verify_case(3, Arg2, countLists(Arg0, Arg1)); }
	void test_case_4() { int Arr0[] = {
0,18955782,19774078,15197314,10559559,9167552,1059865,10395923,23165910,45583720,
18955782,0,820344,29809284,25173569,27974854,19993119,29335317,4212176,60207982,
19774078,820344,0,30039804,25991737,27678910,20813415,28515181,5030312,60438294,
15197314,29809284,30039804,0,4637893,7079490,16238747,7947665,25599828,38824426,
10559559,25173569,25991737,4637893,0,2802311,11603038,4161876,29383569,35040559,
9167552,27974854,27678910,7079490,2802311,0,10211033,1393619,32151830,37515176,
1059865,19993119,20813415,16238747,11603038,10211033,0,9342218,24205263,44540273,
10395923,29335317,28515181,7947665,4161876,1393619,9342218,0,33544901,36252795,
23165910,4212176,5030312,25599828,29383569,32151830,24205263,33544901,0,64419518,
45583720,60207982,60438294,38824426,35040559,37515176,44540273,36252795,64419518,0
}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1000000000; int Arg2 = 976248323; verify_case(4, Arg2, countLists(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
XorLists ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
