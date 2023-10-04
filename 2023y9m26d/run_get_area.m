disp('求解二元一次方程组')
disp('ax+by+c=0')
disp('dx+ey+f=0')


a = input("请输入a:")
b = input("请输入b:")
c = input("请输入c:")
d = input("请输入d:")
e = input("请输入e:")
f = input("请输入f:")

x=(0-c-b*(c*d/a-f)/(e-b*d/a))/a
y=(c*d/a-f)/(e-b*d/a)



