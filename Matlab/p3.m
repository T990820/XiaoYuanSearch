x=linspace(0,4*pi,4096);
y1=cos(x);
y2=exp(x).*sin(x);
figure(1)
subplot(211)
plot(x,y1,'r-');
a=xlabel('x(0~2��)','Fontsize',12,'Fontname', '����');ylabel('y1=cos(x)','Fontsize',12,'Fontname', '����');
get(a)
subplot(212)
plot(x,y2,'g:');
xlabel('x(0~2��)','Fontsize',12,'Fontname', '����');ylabel('y1=e^xsin(x)','Fontsize',12,'Fontname', '����');