class Solution {
public:
    int array[100][100];
    int uniquePaths(int m, int n) {
        memset(array,-1,sizeof(array));
        return recursiva(m,n,0,0);
    }
    int recursiva(int m, int n, int i, int j){
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(i >= m || j >= n){
            return 0;
        }
        if(array[i][j] != -1){
            return array[i][j];
        }
        return array[i][j] = recursiva(m,n,i+1,j) + recursiva(m,n,i,j+1);
    }
};