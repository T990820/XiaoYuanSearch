for i in range(1, 5):
    for j in range(1, i+1):
        print('#', end='')  # print函数在输出完毕之后后默认换行，加上end=''这句话就能让print输出完毕之后停留在本行
    print()  # print函数在输出完毕之后后默认换行
for i in range(1, 5):
    for j in range(1, i):
        print(' ', end='')
    for j in range(1, 10-2*i):
        print('*', end='')
    print()
for i in range(1, 5):
    for j in range(1, 5):
        print('*', end='')
    print('')
