#define EMPTY 0
#define FRESH 1
#define ROTTEN 2

int rMoves[4] = {0, 1, 0, -1};
int cMoves[4] = {1, 0, -1, 0};


class Solution {
    // 0 -> empty
    // 1 -> fresh
    // 2 -> rotten
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int, int>> q;
        queue<pair<int, int>> helperQueue;
        int min = 0;
        
        int R = grid.size();
        int C = grid[0].size();


        // Visit Rotten oranges
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == ROTTEN)
                    q.push(pair{i, j});
            }
        }
        q.push(pair{-1, -1});
    
        
        while(q.empty() == false){
            int r = q.front().first;
            int c = q.front().second;
             q.pop();
            if(r == -1 && c == -1){
                min++;
                if(q.front().first == -1 && q.front().second == -1 || q.empty()) {
                    break;
                }
                q.push(pair{-1, -1});
            }
        
            // Visit adjacent points
            for(int move = 0; move < 4; move++){
                int newR = r + rMoves[move];
                int newC = c + cMoves[move];
                // Check if the move is valid
                if(newR >= 0 && 
                   newR < R && 
                   newC >= 0 && 
                   newC < C && 
                   grid[newR][newC] == FRESH
                  ){
                    q.push(pair{newR, newC});
                    grid[newR][newC] = ROTTEN;  // Mark visited
                    
                }
                
            }
            
        }
        
      
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++)
                if(grid[i][j] == FRESH) return -1;
        }
        
        return min - 1;
    }
};
