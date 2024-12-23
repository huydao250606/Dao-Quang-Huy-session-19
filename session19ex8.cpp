#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
}Student;

void sortStd(Student students[],int size);
void printStd(Student students[],int size);

int main(){
    Student students[5]={
	    {1,"Dao Quang Huy",25,"0889382506"},
	    {2,"Dao Huyen Trang",06,"03320600JQK"},
	    {3,"Pham Thu Trang",2006,"0944444444"},
	    {4,"Pham Hong Duyen",11,"0987654321"},
	    {5,"Dao Huy Hoang",07,"99999999999"}
    };
    int size=5;
    printf("Danh sach sinh vien truoc khi sap xep:\n");
    printStd(students,size);
    sortStd(students,size);
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    printStd(students,size);
    
    return 0;
}

void sortStd(Student students[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(strcmp(students[i].name,students[j].name)>0){
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
}

void printStd(Student students[],int size){
    printf("\nDanh sach sinh vien hien tai:\n");
    for(int i=0;i<size;i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               students[i].id,students[i].name,students[i].age,students[i].phoneNumber);
    }
}
