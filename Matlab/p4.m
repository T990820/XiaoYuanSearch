A=[1 3;8 7];
B=[2 4;5 7];
D=eye(2);
C=[A(1,1:2)' B(1,1:2)' B(2,1:2)';A(2,1:2)' D]
C(2,1:3)