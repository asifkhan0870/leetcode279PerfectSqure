class Solution {
public:
    
   
    
    int solve(int n,vector<int>&dp){
        
        if(n==0){
            return 0;
        }
        
        if(dp[n]!=-1){
            
            return dp[n];
        }
        
         
        int res=INT_MAX;
        
        for(int i=1;i<=sqrt(n);i++){
            
            res=min(res,1+solve(n-i*i,dp));
        }
        
        return dp[n]=res;
    }
    
    
    int numSquares(int n) {
        
        int N=1e4;
        vector<int>dp(N);
        
        for(int i=0;i<N;i++){
            dp[i]=-1;
        }
        
        // memset(dp,-1,sizeof(dp));
        
        return solve(n,dp);
    }
};