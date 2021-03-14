ch1, ch2 = input().split(' ')
ch1 = chr(ord(ch1)+32)
ch2 = chr(ord(ch2)+32)
ch3 = ch1
ch1 = ch2
ch2 = ch3
print("ch1=%c,ch2=%c" % (ch1, ch2))

