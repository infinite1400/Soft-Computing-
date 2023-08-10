// जय श्री राम !!
// Do not get stuck on a single approach for long !, think of multiple ways !!
// Always use pen and paper to solve ! Don't directly jump into coding !!
#include <bits/stdc++.h>
using namespace std;
#define code by Murari Pandey Infinite1400 from NITKKR
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define br break
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
#define loopn(i, n) for (int i = n - 1; i >= 0; i--)
#define maap map<int, int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define vec vector<int>
#define int long long int
#define mod 998244353
#define mod1 1000000007
#define decimal(n) fixed<<setprecision(n)
const int N = 1e5 + 5;
bool isPrime[N];
vector<int> primes;
// (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧
bool compare(pair<int, int> &i, pair<int, int> &j) { return i.second < j.second; }
bool comp(pair<int, string> &a, pair<int, string> &b) { return a.second < b.second; }

//Test Case
// 0 1 3
// 4 2 5 
// 7 8 6
// 1 2 3
// 4 5 6
// 7 8 0

// match function to find how many integers are same of grid are at the 
// same place at the goal !!
int match(vector<vector<int>> &grid,vector<vector<int>> &goal){
    int ans=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i][j]==goal[i][j]) ans++;
        }
    }
    return ans;
}
void infinite()
{
    vector<vector<int>> grid(3,vector<int>(3));
    vector<vector<int>> goal(3,vector<int>(3));
    // taking the input for given grid 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cin>>grid[i][j];
    }
    // input of goal for which grid should be same
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cin>>goal[i][j];
    }
    // 0 i'm considering empty sapce
    int x=-1;
    int y=-1;
    // finding index for empty space
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i][j]==0){
                x=i;
                y=j;
            }
        }
        if(x!=-1 && y!=-1) break;
    }
    int dirx[]={-1,1,0,0};
    int diry[]={0,0,-1,1};
    int level=0;
    int cc=2;
    while(1){
        int mat=-1e9;
        vector<vector<int>> dummy;
        int a=-1,b=-1;
        // finding a grid configuration which is maximum match for the goal grid 
        for(int i=0;i<4;i++){
            int n_x=x+dirx[i];
            int n_y=y+diry[i];
            if(n_x>=0 && n_y>=0 && n_x<=3 && n_y<=3){
                swap(grid[x][y],grid[n_x][n_y]);
                int m=match(grid,goal);
                if(m>mat){
                    mat=m;
                    a=n_x;
                    b=n_y;
                    dummy=grid;
                }
                swap(grid[x][y],grid[n_x][n_y]);
            }
        }
        level++;
        grid=dummy;
        x=a;
        y=b;
        if(match(grid,goal)==9){
            break;
        }
    }
    cout<<"level-- "<<level<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        infinite();
        // cout<<t;
    }
    cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    cerr<<__DATE__<<endl<<__TIME__<<endl;
    return 0;
}