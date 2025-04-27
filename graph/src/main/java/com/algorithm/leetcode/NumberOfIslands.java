package com.algorithm.leetcode;

public class NumberOfIslands {
    public static void main(String[] args) {
        char[][] grid = {
                {'1', '1', '0', '0', '0'},
                {'1', '1', '0', '0', '0'},
                {'0', '0', '1', '0', '0'},
                {'0', '0', '0', '1', '1'}
        };

        System.out.println(new NumberOfIslands().numIslands(grid));
    }

    public int numIslands(char[][] grid) {
        int res = 0;
        for(int r = 0;r<grid.length;r++){
            for(int c = 0;c<grid[r].length;c++){
                if(grid[r][c]=='1'){
                    dfs(grid,r,c);
                    res++;
                }
            }
        }
        return res;

    }

    void dfs(char[][] grid, int r, int c) {

        if (!(0 <= r && r < grid.length && 0 <= c && c < grid[0].length) || grid[r][c] != '1') {
            return;
        }
        grid[r][c] = '0';

        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r,c-1);
    }
}
