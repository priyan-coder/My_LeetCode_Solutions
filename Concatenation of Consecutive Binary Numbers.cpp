class Solution {
public:
    int concatenatedBinary(int n) {
    long long int MOD = 1000000007;
    long long int val = 0; 
	int i = 1; 
	while(i <=n) {
		// number of digits in base 2
		int d = (1 + int(log2(i))) % MOD;
		val = ((val << d) + i) % MOD; 
        i++;
    }
        
    return val;
        
    }
};
