import math
a = int(input())
b = int(input())
c = int(input())
if(a+b<c or a+c<b or b+c<a):
    print("这三条边无法构成一个三角形，请重新输入")
else:
    print("三角形周长是%d" % (a+b+c))
    print("三角形面积是%.2f" % (0.5*a*b*math.sqrt(1-((a*a+b*b-c*c)/2/a/b*(a*a+b*b-c*c)/2/a/b))))

