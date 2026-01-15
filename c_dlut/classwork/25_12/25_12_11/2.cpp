#include <stdio.h>
#include <string.h>

int main(){
    int n;  //商品个数
    printf("商品数为：");
    scanf("%d",&n);

    struct{  //定义结构体
        int gid;
        char gname[30];
        float price;
        int count;
    }Goods[n];

    for(int i=0;i<n;i++){  //输入单个商品的信息
        printf("请输入编号：");
        scanf("%d",&Goods[i].gid);

        int c;
        while( (c=getchar( ))!='\n' && c!=EOF);
        printf("请输入商品名称：");
        fgets(Goods[i].gname,sizeof(Goods[i].gname),stdin);
        Goods[i].gname[strcspn(Goods[i].gname,"\n")]='\0';

        printf("请输入商品价格：");
        scanf("%f",&Goods[i].price);

        printf("请输入购买数量：");
        scanf("%d",&Goods[i].count);
    }

    float total[n];  //计算每种商品总价总价
    for(int i=0;i<n;i++){
        if(Goods[i].count>=10){
            total[i]=Goods[i].price*Goods[i].count*0.9;
        }
        else if(Goods[i].count<10){
            total[i]=Goods[i].price*Goods[i].count;
        }
    }

    printf("\ngid\tname\tprice\tcount\n");  //格式化输出
    printf("---------------------------------\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%.1f\t%d\n",
        Goods[i].gid,
        Goods[i].gname,
        Goods[i].price,
        Goods[i].count);
    }
}