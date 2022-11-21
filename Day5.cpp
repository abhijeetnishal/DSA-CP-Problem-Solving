/*
Matrix 2d arrays. ->dp, graphs
Traversal, implementaion.

1. normal traversal:
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		a[i][j]


2. at a point in a matrix, directions: (initial x,y=(0,0))
(x+1,y)
(x-1,y)
(x,y+1)
(x,y-1)

X: [1,-1,0,0]
Y: [0,0,1,-1]

for(int i=0;i<4;i++)
new coordinate:
nx: x+X[i]
ny: y+Y[i]

*/

/*
Problem-1: LC
Determine perimeter by checking if there is land then check 
4 neighbour have water or out of bound then add to ans.

Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
TC: O(n*m*4)
*/
int islandPerimeter(vector<vector<int>>& grid) {
    int n=grid.size(), m=grid[0].size();
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(grid[i][j]==1){

                int curAns=0;
                int X[4]={1,-1,0,0};
                int Y[4]={0,0,1,-1};

                for(int k=0;k<4;k++){
                    int nx=i+X[k];
                    int ny=j+Y[k];

                    if(nx<0 || nx>=n || ny<0 || ny>=m){
                        curAns++;
                    }

                    else if(grid[nx][ny]!=1){
                        curAns++;
                    }
                }
                ans+=curAns;
            }
        }
    }
    return ans;
}