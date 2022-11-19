/*
Maths:
factors, prime factors, etc.
ap/gp, inequalities, vector, etc

*/

//Factors of a number:

//brute force: O(N)
void solve(){
    int n;
    cin>>n;

    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }

    for(int val:ans)
        cout<<val<<" ";
}

//optimized: O(sqrt(N))
void solve(){
    int n;
    cin>>n;

    vector<int> ans;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i!=0)
            continue;
        ans.push_back(i);
        if(n/i!=i)
            ans.push_back(n/i);
    }

    for(int val:ans)
        cout<<val<<" ";
}



//Prime Factors:
//optimized: O(sqrt(N))
void solve(){
    int n;
    cin>>n;

    unordered_set<int> ans;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            n/=i;
            ans.insert(i);
        }
    }

    if(n!=1)
        ans.insert(n);

    for(auto val:ans)
        cout<<val<<" ";
    cout<<"\n";
}

/*
Given an integer columnNumber, return its corresponding 
column title as it appears in an Excel sheet.
Input: columnNumber = 1
Output: "A"

Input: columnNumber = 701
Output: "ZY"

TC: O(logN)
*/
string convertToTitle(int columnNumber) {
    string ans="";
    while(columnNumber>0){
        int rem=columnNumber%26;
        
        if(rem==0)
            rem=26;
        char letter=char(rem+'A'-1);

        columnNumber/=26;
        if(rem==26)
            columnNumber-=1;
        //eg n=52
            
        ans+=letter;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}