# N is the size of the 2D matrix   N*N
N = 9


# A utility function to print grid
def printing(arr):
    for i in range(N):
        for j in range(N):
            print(arr[i][j], end=" ")
        print()



def isSafe(grid, row, col, num):

    for x in range(9):
        if grid[row][x] == num:
            return False

    #
    for x in range(9):
        if grid[x][col] == num:
            return False

   
    startRow = row - row % 3
    startCol = col - col % 3
    for i in range(3):
        for j in range(3):
            if grid[i + startRow][j + startCol] == num:
                return False
    return True



def solveSudoku(grid, row, col):

    if (row == N - 1 and col == N):
        return True


    if col == N:
        row += 1
        col = 0


    if grid[row][col] > 0:
        return solveSudoku(grid, row, col + 1)
    for num in range(1, N + 1, 1):


        if isSafe(grid, row, col, num):


            grid[row][col] = num


            if solveSudoku(grid, row, col + 1):
                return True


        grid[row][col] = 0
    return False


import time
start_time = time.time()


# 0 means unassigned cells
grid = [[0, 0, 0, 0, 9, 2, 0, 0, 0],
        [0, 0, 1, 0, 7, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 3, 0, 0, 0],
        [0, 0, 8, 0, 0, 0, 9, 0, 0],
        [1, 7, 0, 0, 0, 6, 3, 0, 0],
        [0, 0, 0, 3, 0, 0, 8, 0, 0],
        [4, 0, 2, 6, 0, 0, 0, 9, 0],
        [0, 8, 0, 7, 0, 4, 2, 3, 0],
        [3, 0, 0, 0, 0, 8, 6, 4, 0]]

if (solveSudoku(grid, 0, 0)):
    printing(grid)
else:
    print("no solution  exists ")

for i in range(10000000):
    pass

end_time = time.time()
print(f"sodoku is solved in {end_time - start_time} seconds")
