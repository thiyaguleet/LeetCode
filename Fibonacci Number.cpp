class Solution {
public:
	int fib(int N) {
		vector<int> fn = { 0, 1 };
		for (int i = 2; i <= N; i++) {
			fn[i % 2] = fn[0] + fn[1];
		}
		return fn[N % 2];
	}
};
