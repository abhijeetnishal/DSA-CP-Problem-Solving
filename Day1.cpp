/*
Observation and understanding the problem.

1. Understanding time complexity:
Number of operations that are allowed to perform within a second. 
Most of the sites these days allow 10^8 operations per second, only a few sites still
allow 10^7 operations,

Let n be the main variable in the problem:
If n < 12, the time complexity can be O(n!).
If n < 25, the time complexity can be O(2^n).
If n < 100, the time complexity can be O(n^4).
If n < 500, the time complexity can be O(n^3).
If n < 10^4, the time complexity can be O(n^2).
If n < 10^6, the time complexity can be O(n log n).
If n < 10^8, the time complexity can be O(n).
If n > 10^8, the time complexity can be O(log n) or O(1)

Approach:
1. Check Constraints and think of time complexity.
2. Think appraoach and code.
*/

/*
Given an array of n positive integers a1,a2,…,an (1≤ai≤1000). Find the maximum value of i+j such that ai and aj are coprime,† or −1 if no such i, j exist.
For example consider the array [1,3,5,2,4,7,7]. The maximum value of i+j that can be obtained is 5+7, since a5=4 and a7=7 are coprime.
Two integers p and q are coprime if the only positive integer that is a divisor of both of them is 1 (that is, their greatest common divisor is 1).
(2≤n≤2⋅10^5)  (1≤ai≤1000)

TC: O(ai*ai)
*/
void solve(){
    int n;
    cin>>n;

    int a[n];
    vector<int> v(1001,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[a[i]]=i+1;
        //store latest index
    }

    int ans=-1;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(v[i] && v[j] && __gcd(i,j)==1)
                ans=max(ans,v[i]+v[j]);
        }
    }

    cout<<ans<<"\n";
}