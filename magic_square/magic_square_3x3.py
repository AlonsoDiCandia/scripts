import os
import random
 
# Clearing the Screen
os.system('clear')


DIMENSION = 3
MAGIC_CONSTANT = int(DIMENSION * ((DIMENSION**2 + 1)/2))

unique_numbers = list(range(1,10))

def check_constant(matrix):
    # matrix has the following format: [[a, b, c], [d, e, f], [g, h, i]]
    diagonal1 = []
    diagonal2 = []

    for i in range(3):
        # check rows 
        row = sum(matrix[i])
        if row != MAGIC_CONSTANT:
            return False

        # check cols
        col = sum(list(map(lambda y: y[i], matrix)))
        if col != MAGIC_CONSTANT:
            return False
        
        diagonal1.append(matrix[i][i])
        diagonal2.append(matrix[i][DIMENSION-i-1])
    
    # ckeck diagonals
    if sum(diagonal1) != MAGIC_CONSTANT:
        return False
    
    if sum(diagonal2) != MAGIC_CONSTANT:
        return False
    
    return True

def print_matrix(matrix, count):
    # Clearing the Screen
    os.system('clear')
    print('#'*8, 'MAGIC SQUARE', '#'*8)
    format = get_format(matrix)
    print(format)
    print(f'\nMagic squares found: {count}')
    
def get_format(matrix):
    return f'\n\t\t  {matrix[0][0]} | {matrix[0][1]} | {matrix[0][2]} \n\t\t  - + - + - \n\t\t  {matrix[1][0]} | {matrix[1][1]} | {matrix[1][2]} \n\t\t  - + - + -  \n\t\t  {matrix[2][0]} | {matrix[2][1]} | {matrix[2][2]}'

magic_squares = []
while len(magic_squares) < 8:
    matrix = [[0,0,0],[0,0,0],[0,0,0]]
    nums = unique_numbers.copy()

    for i in range(3):
        for j in range(3):
            matrix[i][j] = random.choice(nums)
            nums.remove(matrix[i][j])
    if matrix in magic_squares:
        continue
    if random.choice(list(range(100))) == 5: 
        print_matrix(matrix, len(magic_squares))
    if check_constant(matrix):
        magic_squares.append(matrix)
        print_matrix(matrix, len(magic_squares))

print('All magic square found are:')
for square in magic_squares:
    print(get_format(square))




