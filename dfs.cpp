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

void dfs(vector<int> adj[],vector<int> &vis,int index){
    cout<<index<<" ";
    vis[index]=1;
    for(auto it : adj[index]){
        if(vis[it]==0){
            dfs(adj,vis,it);
        }
    }
}
void infinite()
{
    int n;cin>>n;
    int e;cin>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    //graph thik he 
    for(int i=0;i<n;i++){
        cout<<i<<"--- ";
        for(auto it : adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    vector<int> vis(n,0);
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(adj,vis,i);
        }
    }
    cout<<endl;
}

// Test cases

// 4 5
// 0 1 
// 0 2 
// 0 3 
// 1 3 
// 2 3 
// answer 0 1 3 2 



// 8 8 
// 0 1 0 2 0 3 1 5 1 4 3 7 3 6 2 6
// answer 0 1 5 4 2 6 3 7 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // prime Number in a range from 2 to N
    // sieve();
    // setbits();
    // ofstream Myfile("bits.txt");
    // for (int i = 0; i <= 100000+20; i++)
    // {
    // 	if (isprime(i))
    // 	{
    // 		Myfile << i << ", ";
    // 	}
    // }
    // cout<<"done"<<endl;
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