#include<stdio.h>
int main(){
int id;
float u,charge,surcharge;
char name[101];
scanf("%d",&id);
scanf("%s",name);
scanf("%f",&u);

    printf("Customer IDNO :%d\n",id);
    printf("Customer Name :%s\n",name);
    printf("unit Consumed :%.0f\n",u);
if(u>=100 && u<199){
        charge=u*1.20;
    printf("Amount Charges @Rs. 1.20 per unit : %.2f\n",charge);
}else if(u>=200 && u<400){
    charge=u*1.50;
    printf("Amount Charges @Rs. 1.50 per unit : %.2f\n",charge);
}else if(u>=400 && u<600){
    charge=u*1.80;
    printf("Amount Charges @Rs. 1.80 per unit : %.2f\n",charge);
}else if(u>=600){
    charge=u*2.00;
    printf("Amount Charges @Rs. 2.00 per unit : %.2f\n",charge);
}else if(u<100){
    return 0;
}
if(charge>=400){
    surcharge=charge*(15.0/100);
    printf("Surchage Amount : %.2f\n",surcharge);
printf("Net Amount Paid By the Customer : %.2f\n",charge+surcharge);
}else{
    surcharge=0;
    printf("Surchage Amount : %.2f\n",surcharge);
printf("Net Amount Paid By the Customer : %.2f\n",charge);
}

}
