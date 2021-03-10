profit=[];
productI=[];
productII=[];
for i=0:1:10
    for j=0:1:10
        if(i+2*j<=8&&4*i<=16&&4*j<=12)
            productI=[productI i];
            productII=[productII j];
            profit=[profit 2*i+3*j];
        end
    end
end
[max_profit,index]=max(profit);
disp(['最佳的生产方案是：生产',num2str(productI(1,index)),'件I产品，生产',num2str(productII(1,index)),'件II产品,总收益是',num2str(max_profit),'元']);