/*
prefix sum:
arr[]: 1 -3 2 5 3 6
pref[]:1 -2 0 5 8 14

need->query given (i,j) index given, we want sum b/w i and j in these query.

*/

/*
Q1.Given an integer array nums, return an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i].
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

TC:(N) SC:(N)
*/
vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();

    vector<int> pref(n),suff(n);
    pref[0]=nums[0],suff[n-1]=nums[n-1];

    for(int i=1;i<n;i++)
        pref[i]=pref[i-1]*nums[i];

    for(int i=n-2;i>=0;i--)
        suff[i]=suff[i+1]*nums[i];

    vector<int> ans;
    ans.push_back(suff[1]);

    for(int i=1;i<n-1;i++)
        ans.push_back(pref[i-1]*suff[i+1]);

    ans.push_back(pref[n-2]);

    return ans;
}