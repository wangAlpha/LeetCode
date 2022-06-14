impl Solution {
    pub fn unique_paths(m: i32, n: i32) -> i32 {
        let n = n as usize;
        let mut dp = vec![1; n];
        for _ in 1..m {
            for i in 1..n {
                dp[i] += dp[i - 1];
            }
        }
        dp[n - 1]
    }
}