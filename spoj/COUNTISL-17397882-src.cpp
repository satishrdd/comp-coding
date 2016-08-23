
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
 
#define ROW 200
#define COL 200

int erow;
int ecol;
 
 std::vector<int> isizes;
int prevcount=0;

bool visited[ROW][COL];

int isSafe(int M[][COL], int row, int col)
{
    
    return (row >= 0) && (row < erow) &&     
           (col >= 0) && (col < ecol) &&      
           (M[row][col] && !visited[row][col]); 
}
 

void DFS(int M[][COL], int row, int col)
{
    
   
    static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};
 
    
    visited[row][col] = true;
    prevcount++;
    
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k]) )
            DFS(M, row + rowNbr[k], col + colNbr[k]);
}
 

int countIslands(int M[][COL])
{
    
   
    memset(visited, false, sizeof(visited));
 
    
    int count = 0;
    
    for (int i = 0; i < erow; ++i)
        for (int j = 0; j < ecol; ++j)
            if (M[i][j] && !visited[i][j]) 
            {                        
                DFS(M, i, j);     
                int res = prevcount;
                prevcount =0;
                isizes.push_back(res);
                ++count;                   
            }
 
    return count;
}
 

int main(void)
{
int cases;
std::cin>>cases;
while(cases--){
std::string s;
int i=0;
std::cin>>erow>>ecol;
int M[ROW][COL];

    
        while(i<erow){
    std::cin>>s;
    for(int j=0;j<s.length();j++){
        if(s[j]=='#'){
            M[i][j] = 1;
        }else{
            M[i][j]=0;
        }
    }
    i++;}

   
 
   
   
  printf("%d\n", countIslands(M));}
    return 0;
}