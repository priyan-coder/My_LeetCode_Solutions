class Solution {
    public String getSmallestString(int n, int k) {
        char[] output = new char[n];
        Arrays.fill(output, 'a');
        k = k - n; 
        while(k != 0){
            output[--n] += Math.min(25,k);
            k -= Math.min(25,k);
        }
	return String.valueOf(output);
        
  }
}
