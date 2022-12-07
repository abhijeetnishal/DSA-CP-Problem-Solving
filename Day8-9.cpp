/*
Implementation:
practice more implementation problem (array,string)

Q1. Consider an array a of n positive integers.
You may perform the following operation:
select two indices l and r (1≤l≤r≤n), then
decrease all elements al,al+1,…,ar by 1.
Let's call f(a) the minimum number of operations needed to change array a into an array of n zeros.
Determine if for all permutations b of a, f(a)≤f(b) is true.

e.g.->
3
4
2 3 5 4
3
1 2 3
4
3 1 3 2

YES
YES
NO
*/
//minima maxima
void solve(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    if(n==1)
        cout<<"Yes"<<end1;
        return;

    int i=1;
    while(i<n && a[i]>=a[1-1])
    	i++;
    while(i+1<n && a[i]>=a[i+1]) 
    	i++;

    if(i>=n-1) 
    	cout<<"Yes\n";
    else 
    	cout<<"No\n";
}
