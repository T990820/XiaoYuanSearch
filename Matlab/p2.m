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
disp(['��ѵ����������ǣ�����',num2str(productI(1,index)),'��I��Ʒ������',num2str(productII(1,index)),'��II��Ʒ,��������',num2str(max_profit),'Ԫ']);