class Solution {
public:
    int memo[46]; 
    int climbStairsHelper(int n) {

        if (n == 0) return 1;  
        if (n == 1) return 1;  
        
        if (memo[n] != -1) {
            return memo[n];
        }
        
        memo[n] = climbStairsHelper(n - 1) + climbStairsHelper(n - 2);
        
        return memo[n];
    }

    int climbStairs(int n) {
        for (int i = 0; i <= 45; i++) 
        {
            memo[i] = -1;
        }

        return climbStairsHelper(n);
    }
};

