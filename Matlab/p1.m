for i=100:1:999
    if(i==mod(i,10)^3+((mod(i,100)-mod(i,10))/10)^3+floor(i/100)^3)
        disp([num2str(i),'是水仙花数']);
    end
end