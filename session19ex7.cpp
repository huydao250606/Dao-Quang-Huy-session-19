#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
}Student;

void deleteStd(int id,Student students[],int *size);
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
    printStd(students,size);
    int idToDelete;
    printf("\nNhap ID cua sinh vien can xoa: ");
    scanf("%d",&idToDelete);
    deleteStd(idToDelete,students,&size);
    printStd(students,size);
  
    return 0;
}

void deleteStd(int id,Student students[],int *size){
    int found=0;
    for(int i=0;i<*size;i++){
        if(students[i].id==id){
            found=1;
            for(int j=i;j<*size-1;j++){
                students[j]=students[j+1];
            }
            (*size)--;
            break;
        }
    }
    if(found){
        printf("Sinh vien voi ID %d da duoc xoa\n",id);
    }else{
        printf("Khong tim thay sinh vien voi ID %d\n",id);
    }
}

void printStd(Student students[],int size){
    printf("\nDanh sach sinh vien hien tai:\n");
    for(int i=0;i<size;i++){
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               students[i].id,students[i].name,students[i].age,students[i].phoneNumber);
    }
}
