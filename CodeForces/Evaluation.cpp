#include <bits/stdc++.h>
using namespace std;
bool searchWord(char[][] matrix, String word) {
		int N = matrix.length();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (search(matrix, word, i, j, 0, N)) {
					return true;
				}
			}
		}
		return false;
}
void print()
{
    
}

/*bool findmatch(char mat[r], string pat, int x, int y, int nrow, int ncol, int level)
{
    int l = pat.length();
    if (level == l)
        return true;
    if (x < 0 || y < 0 || x >= nrow || y >= ncol)
        return false;

    if (mat[x][y] == pat[level]) {
        char temp = mat[x][y];
        mat[x][y] = '#';
        bool res = findmatch(mat, pat, x - 1, y, nrow, ncol, level + 1) | 
                   findmatch(mat, pat, x + 1, y, nrow, ncol, level + 1) | 
                   findmatch(mat, pat, x, y - 1, nrow, ncol, level + 1) | 
                   findmatch(mat, pat, x, y + 1, nrow, ncol, level + 1);
        mat[x][y] = temp;
        return res;
    }
    else 
        return false;
}*/
bool search(char[][] matrix, String word, int row, int col, int index, int N) {

		if (solution[row][col] != 0 || word[index] != matrix[row][col]) {
			return false;
		}

		if (index == word.size() - 1) {
			
			solution[row][col] = path++;
			return true;
		}
		solution[row][col] = path++;		
		if (row + 1 < N && search(matrix, word, row + 1, col, index + 1, N)) {
		return true;
		}
		if (row - 1 >= 0 && search(matrix, word, row - 1, col, index + 1, N)) {
		return true;
		}
		if (col + 1 < N && search(matrix, word, row, col + 1, index + 1, N)) {
		return true;
		}
		if (col - 1 >= 0 && search(matrix, word, row, col - 1, index + 1, N)) {
			return true;
		}
		if (row - 1 >= 0 && col + 1 < N && search(matrix, word, row - 1, col + 1, index + 1, N)) {
			return true;
		}
		if (row - 1 >= 0 && col - 1 >= 0 && search(matrix, word, row - 1, col - 1, index + 1, N)) {
		return true;
		}
		if (row + 1 < N && col - 1 >= 0 && search(matrix, word, row + 1, col - 1, index + 1, N)) {
		return true;
		}
		if (row + 1 < N && col + 1 < N && search(matrix, word, row + 1, col + 1, index + 1, N)) {
			return true;
		}
		solution[row][col] = 0;
		path--;
		return false;
	}
/*bool checkMatch(char mat[r], string pat, int nrow, int ncol)
{
  
    int l = pat.length();
    if (l > nrow * ncol)
        return false;

    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            if (mat[i][j] == pat[0])
                if (findmatch(mat, pat, i, j, nrow, ncol, 0))
                    return true;
        }
    }
    return false;
}*/
int main()
{
    int n,m;
    cin>>n>>m;
    char grid[n][m];
    int solution[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            solution[i][j]=0;
        }
    }
    string s;
    cin>>s;
    if (checkMatch(grid, s, r, c))
        cout << "Yes";
    else
        cout << "No";
  
 return 0;
  
}