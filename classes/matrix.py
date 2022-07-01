n = int(input())

matrix = [[0]*n for _ in range(n)]

print(matrix)

matrix[3][0] = 15

for lista in matrix:
    print(lista)
