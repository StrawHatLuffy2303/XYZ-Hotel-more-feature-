#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,qtysamosa=0,qtydosa=0,qtytea=0,qty=0,cash;
    float price1=0,price2=0,price3=0,amnt,grandtotal=0,rate=0,subtotal;
    char chr;
    int amount,remain,hun,fif,twe,ten,fiv,two,one;


    do
    {
      printf("\nWelcome To XYZ Hotel\n");
      printf("Menu:\n");
      printf("1 Samosa 20/-\n");
      printf("2 Dosa 30/-\n");
      printf("3 Tea 10/-\n");
      printf("0 Exit and print bill");

      printf("\nEnter your Choice:");
      scanf("%d" , &choice);


      switch (choice)
      {
      case 1:
        price1=20.00;
        printf("\nEnter number of plates:");
        scanf("%d" , &qty);
        qtysamosa+=qty;
        amnt=price1*qty;
        subtotal=qtysamosa*price1;
        break;
      case 2:
        price2=30.00;
        printf("\nEnter number of plates:");
        scanf("%d" , &qty);
        qtydosa+=qty;
        amnt=price2*qty;
        subtotal=qtydosa*price2;
        break;
      case 3:
        price3=10.00;
        printf("\nEnter number of plates:");
        scanf("%d" , &qty);
        qtytea+=qty;
        amnt=price3*qty;
        subtotal=qtytea*price3;
        break;

      default:
        if (choice==0)
        {
          printf("Select 'NO' for print the bill");
        }
        else
        printf("Sorry there is wrong input");
        break;
      }
      
      printf(" Sub-Total=%.2f",amnt);

      grandtotal=grandtotal+amnt;

      printf("\nWanna add more food(Y/N)-");
      chr=getche();

    } while (chr=='Y' || chr=='y');

   //********************************************************print bill*********************************************************************

    printf("\n::YOUR BILL::\n");
    printf("\n|\tSR.NO.\t|\tITEM\t|\tQTY\t|\tRATE\t|\tSUB TOTAL\t");
    printf("\n------------------------------------------------------------------------------------");

    
    int a=1;
    if (qtysamosa!=0)
    {
      printf("\n|\t%d\t|\tSamosa\t|\t%d\t|\t%.2f\t|\t%.2f\t",a++,qtysamosa,price1,qtysamosa*price1);
    }

    if(qtydosa!=0)
    {
    printf("\n|\t%d\t|\tDosa\t|\t%d\t|\t%.2f\t|\t%.2f\t",a++,qtydosa,price2,qtydosa*price2);
    }

    if (qtytea!=0)
    {
     printf("\n|\t%d\t|\tTea\t|\t%d\t|\t%.2f\t|\t%.2f\t",a++,qtytea,price3,qtytea*price3);  
    }

    printf("\n------------------------------------------------------------------------------------\n");
    printf("                           \tGRAND TOTAL-%.2f\t",grandtotal);
    

    //**********************************************************cash*************************************************************************

    printf("\nEnter the Cash=");
    scanf("%d" , &cash);

    if (grandtotal==cash)
    {
  
    }
    
    else if (cash>grandtotal)
    {

      cash-=grandtotal;
      printf("Return=%d",cash);

    hun=cash/100;
    remain=cash-hun*100;

    fif=remain/50;
    remain=remain-fif*50;

    twe=remain/20;
    remain=remain-twe*20;

    ten=remain/10;
    remain=remain-ten*10;

    fiv=remain/5;
    remain=remain-fiv*5;

    two=remain/2;
    remain=remain-two*2;

    one=remain/1;

    if(hun!=0)
    printf("\n100 Notes X %d=%d\n",hun,100);
    if(fif!=0)
    printf("\n50 NOTES X %d=%d\n",fif,50);
    if(twe!=0)
    printf("\20 NOTES X %d=%d\n",twe,20);
    if(ten!=0)
    printf("\n10 NOTES X %d=%d\n",ten,10);
    if(fiv!=0)
    printf("\n5 NOTES X %d=%d\n",fiv,5);
    if(two!=0)
    printf("\n2 NOTES X %d=%d\n",two,2);
    if(one!=0)
    printf("\n1 NOTES X %d=%d\n",one,1);

    }

    else if (cash<grandtotal)
    {
      grandtotal-=cash;
      printf("Please pay %.2f more\n",grandtotal);

     while(1){
     printf("\nEnter the Cash=");
     scanf("%d" , &cash);
     if(cash<grandtotal)
      printf("Wrong Price,Give more..");
      else if(cash>=grandtotal)
      break;
    }
  
    

   if(cash>grandtotal)
    cash-=grandtotal;
    printf("Return=%d",cash);

    hun=cash/100;
    remain=cash-hun*100;

    fif=remain/50;
    remain=remain-fif*50;

    twe=remain/20;
    remain=remain-twe*20;

    ten=remain/10;
    remain=remain-ten*10;

    fiv=remain/5;
    remain=remain-fiv*5;

    two=remain/2;
    remain=remain-two*2;

    one=remain/1;

    if(hun!=0)
    printf("\n100 Notes X %d=%d",hun,100);
    if(fif!=0)
    printf("\n50 NOTES X %d=%d",fif,50);
    if(twe!=0)
    printf("\n20 NOTES X %d=%d",twe,20);
    if(ten!=0)
    printf("\n10 NOTES X %d=%d",ten,10);
    if(fiv!=0)
    printf("\n5 NOTES X %d=%d",fiv,5);
    if(two!=0)
    printf("\n2 NOTES X %d=%d",two,2);
    if(one!=0)
    printf("\n1 NOTES X %d=%d",one,1);

   }

  printf("\n\t              T H A N K Y O U!\t\n");
  
  return 0;

} 
