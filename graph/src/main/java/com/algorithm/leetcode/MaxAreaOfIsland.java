package com.algorithm.leetcode;

public class MaxAreaOfIsland {
    public static void main(String[] args) {

    }

    public int maxAreaOfIsland(int[][] grid) {
        int maxArea = 0;
        for(int r = 0;r<grid.length;r++){
            for(int c= 0;c<grid[r].length;c++){
                if(grid[r][c] == 1){
                    int currArea = dfs(grid,r,c);
                    maxArea = Math.max(maxArea,currArea);
                }
            }
        }
        return maxArea;
    }

    int dfs(int[][] grid, int r, int c) {

        if (!(0 <= r && r < grid.length && 0 <= c && c < grid[0].length) || grid[r][c] != 1) {
            return 0;
        }
        grid[r][c] = 0;
        return 1 + dfs(grid, r + 1, c) +
                dfs(grid, r - 1, c) +
                dfs(grid, r, c + 1) +
                dfs(grid, r, c - 1);
    }
}
