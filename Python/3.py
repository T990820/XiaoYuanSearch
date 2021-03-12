for i in range(1, 5):
    for j in range(1, 5-i):
        print(' ', end='')
    for j in range(1, i+1):
        print('%d' % j, end='')
    for j in range(1, i):
        print('%d' % (i-j), end='')
    print('')

