/*
Greedy Algorithm:
Think greedly to solve the problem

generally -> problem is either greedy or DP(all possibility)

category:
Sorting, searching, 2 pointers, priority_queue, sliding window 
*/

/*
Q1. Admin and shopping (codechef)
There are N shops in the mall where the ith shop has a capacity of A_i people.
There are X admins. Each admin wants to visit each of the NN shops exactly once. 
It is known that an admin takes exactly one hour for shopping at any particular shop. 
Find the minimum time (in hours) in which all the admins can complete their shopping.

input:
4 2
1 2 3 4
output:
4
*/
void solve(){
    int n, x;
    cin>>n>>x;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mxm=0;
    for(int i=0;i<n;i++){
        int cnt_hrs;
        if(a[i]>=x)
            cnt_hrs=1;
        else
            cnt_hrs=(x/a[i])+(x%a[i]==0?0:1);
        mxm=max(mxm,cnt_hrs);
    }   

    cout<<max(mxm,n)<<"\n";
}