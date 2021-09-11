#include <stdio.h>


int GetNumberOfItem(int a,int b){
    return abs(a-b)*2;
}

int GetStep(int a,int b){
    return abs(a-b);
}

int main(){

    int t;
    int a,b,c;

    int NumberOfItem;
    int Step;

    int i;

    do{
        scanf("%d",&t);
    }while((t<1)||(t>10000));

    int tab[t][3];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        tab[i][0]=a;
        tab[i][1]=b;
        tab[i][2]=c;
    }
    for(i=0;i<t;i++){
        NumberOfItem=GetNumberOfItem(tab[i][0],tab[i][1]);
        Step=GetStep(tab[i][0],tab[i][1]);
        if((tab[i][0]<=NumberOfItem)&&(tab[i][1]<=NumberOfItem)&&(tab[i][2]<=NumberOfItem)){
            if((tab[i][2]+Step)%NumberOfItem==0){
                printf("%d\n",NumberOfItem);
            }
            else{
                printf("%d\n",(tab[i][2]+Step)%NumberOfItem);
            }
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
