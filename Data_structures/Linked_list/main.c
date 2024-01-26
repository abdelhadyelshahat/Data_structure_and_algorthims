#include <stdio.h>


/* record defination */
struct record 
{
    /*record fields*/
    char first_name[20];
    char last_name [20];
    int ID ;
    int age ;

};

/* alising for structure */
typedef struct  record record ;


/* function to print the record */
void print_record (record object_record)
{
    puts("-------------------------");
    printf(" the first_name of the record is : %s \n",object_record.first_name);
    printf(" the last_name of the record is : %s \n",object_record.last_name);
    printf(" the ID of the record is : %d \n",object_record.ID);
    printf(" the age of the record is : %d \n",object_record.age);
}

int main ()
{
    record object_record [3]= { {"Hady","Elshahat",1,25},
                                {"mid","sffd",2,26},
                                {"sh","ffd",3,23}   };
    for(int index = 0 ; index<3 ; index++)
    {
        print_record(object_record[index]);
    }
    
}