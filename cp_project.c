#include<stdio.h>
struct product{
    int id;
    char name[50];
    float price;
    int quantity;
};
// void index (struct product items[],int n){
//     printf("Enter Total Number Of Products: ");
//     scanf("%d",&n);
//     for(int i=0;i < n ; i++){
//         printf("");
//     }
//}
void Add_item(struct product[]);
void Search_item(struct product[]);
void Update_item(struct product[]);
void delete_item(struct product[]);
void display_menu();



int main(){
    int choice;
    struct product item[2];
    int count=0;
    do{
        //printf("TO DISPLAY MENU PRESS 1");
        //scanf("%d",count);
        //while(count == 1)
        display_menu();
        printf("\n Which Option Do You Want to Select ?:  ");
        scanf("%d",&choice);
    // Add_item(item);
    // for(int i = 0 ; i < 2 ; i++)
    // printf("%d %s %.2f %d\n",item[i].id,item[i].name,item[i].price,item[i].quantity);
        switch (choice)
        {
        case 1:
            Add_item(item);
            break;
        case 2:
            Search_item(item);
            break;
        //case 3:
           // Update_item(item);
           // break;
       // case 4:
         //   delete_item(item);
           // break;
        default:
            break;
        }
    }
        while(choice != 5);
        
        return 0;

}
void display_menu(){

    printf("\n<================================= INVENTORY MANAGEMENT SYSTEM =================================>\n\n");
    printf("\n                                        Choice #1  Add PRODUCT                       \n");
    printf("\n                                        Choice #2  Search PRODUCT                    \n");
    printf("\n                                        Choice #3  UPDATE PRODUCT                    \n");
    printf("\n                                        Choice #4  DELETE PRODUCT                    \n");
    printf("\n                                        Choice #5  EXIT                              \n");

}



void Add_item(struct product item[]){
    for(int i=0;i<2;i++){
        int cont=1;
    printf("Enter Product #%d ID: ",i+1);
    scanf("%d",&item[i].id);

    printf("Enter Product #%d Name: ",i+1);
    scanf(" %s",&item[i].name);

    printf("Enter Product #%d Price: ",i+1);
    scanf("%f",&item[i].price);

    printf("Enter Product #%d Qunatity: ",i+1);
    scanf("%d",&item[i].quantity);
     printf("\n");
     // now to ask user whether to keep entering records or not
    while(1){ 
        printf("DO YOU WANT TO ADD MORE PRODUCTS?(1 FOR YES AND 0 FOR NO): ");
        scanf("%d",&cont);
        if(cont == 1)
        break;
        if(cont == 0)
        break;
        else if (cont != 0 && cont != 1){
        printf("<------Input Correct Option------>\n\n");
        continue;
        }
    }
    if(cont == 0)
        break;
    }
    printf("\n");
}

void Search_item(struct product item[]){}



