#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMoves(vector<vector<int>>& grid) {
        map<pair<int,int>,int>m;
		vector<pair<int,int>> d{{0,1},{1,0},{-1,0},{0,-1}};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i][j]>1){
                    for(auto [x,y]:d){
                        int ix=x+i,jy=y+j;
                        if(grid[i][j]>1 && grid[ix][jy]==0){
                            grid[i][j]--;
                            grid[ix][jy]++;
                        }
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i][j]>1){
                    m[{i,j}]=grid[i][j];
                }
            }
        }
        for(auto [x,y]:m) cout<<x.first<<" "<<x.second<<" "<<y<<endl;
        int c=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[i][j]==0){
					cout<<"For the index: "<<i<<" "<<j<<endl;
					int p=0,q=0,val=INT_MAX;
                    for(auto[x,y]:m){
						auto [l,r]=x;
                        if(grid[l][r]>1){
							int dis=abs(i-l)+abs(j-r);
                            if(dis<val){
								p=l;
                                q=r;
                                val=dis;
                            }
                        }
                    }
					cout<<"update value with : "<<val<<" "<<p<<" "<<q<<" "<<grid[p][q]<<endl;
                    c+=val;
                    grid[p][q]--;
					cout<<"Updated "<<grid[p][q]<<endl<<endl;
                }
            }
        }
        return c;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid(3, vector<int>(3));

    cout << "Enter the 3x3 grid:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> grid[i][j];

    int moves = sol.minimumMoves(grid);
    cout << "Minimum moves: " << moves << endl;

    return 0;
}
