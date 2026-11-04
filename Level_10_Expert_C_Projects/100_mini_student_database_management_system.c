#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[60];
    float marks;
}
Student;
Student *a=NULL;
size_t n=0,cap=0;
int cmp(const void *x,const void *y) {
    float d=((const Student*)y)->marks-((const Student*)x)->marks;
    return (d>0)-(d<0);
}
int find(int id) {
    for(size_t i=0; i<n; i++)if(a[i].id==id)return (int)i;
    return -1;
}
void add(void) {
    Student s;
    printf("ID name marks: ");
    if(scanf("%d%59s%f",&s.id,s.name,&s.marks)!=3)return;
    if(find(s.id)>=0) {
        puts("ID already exists");
        return;
    }
    if(n==cap) {
        size_t nc=cap?cap*2:8;
        Student*t=realloc(a,nc*sizeof *a);
        if(!t) {
            perror("realloc");
            return;
        }
        a=t;
        cap=nc;
    }
    a[n++]=s;
    puts("Student added");
}
void view(void) {
    if(!n) {
        puts("No records");
        return;
    }
    for(size_t i=0; i<n; i++)printf("%d %-20s %.2f\n",a[i].id,a[i].name,a[i].marks);
}
void search_student(void) {
    int id;
    scanf("%d",&id);
    int i=find(id);
    if(i<0)puts("Not found");
    else printf("%d %s %.2f\n",a[i].id,a[i].name,a[i].marks);
}
void update(void) {
    int id;
    scanf("%d",&id);
    int i=find(id);
    if(i<0) {
        puts("Not found");
        return;
    }
    printf("New name and marks: ");
    scanf("%59s%f",a[i].name,&a[i].marks);
}
void delete_student(void) {
    int id;
    scanf("%d",&id);
    int i=find(id);
    if(i<0) {
        puts("Not found");
        return;
    }
    for(size_t j=(size_t)i; j+1<n; j++)a[j]=a[j+1];
    n--;
    puts("Deleted");
}
void save(void) {
    FILE*f=fopen("students.txt","w");
    if(!f) {
        perror("students.txt");
        return;
    }
    for(size_t i=0; i<n; i++)fprintf(f,"%d %s %.2f\n",a[i].id,a[i].name,a[i].marks);
    fclose(f);
    puts("Saved");
}
void load(void) {
    FILE*f=fopen("students.txt","r");
    if(!f) {
        puts("No saved database");
        return;
    }
    n=0;
    Student s;
    while(fscanf(f,"%d%59s%f",&s.id,s.name,&s.marks)==3) {
        if(n==cap) {
            size_t nc=cap?cap*2:8;
            Student*t=realloc(a,nc*sizeof *a);
            if(!t) {
                perror("realloc");
                fclose(f);
                return;
            }
            a=t;
            cap=nc;
        }
        a[n++]=s;
    }
    fclose(f);
    printf("Loaded %zu records\n",n);
}
void report(void) {
    if(!n) {
        puts("No records");
        return;
    }
    double sum=0;
    float high=a[0].marks,low=a[0].marks;
    for(size_t i=0; i<n; i++) {
        sum+=a[i].marks;
        if(a[i].marks>high)high=a[i].marks;
        if(a[i].marks<low)low=a[i].marks;
    }
    printf("Students: %zu\\nAverage: %.2f\\nHighest: %.2f\\nLowest: %.2f\\n",n,sum/n,high,low);
}
int main(void) {
    int ch;
    do {
        printf("\\n1 Add 2 View 3 Search 4 Update 5 Delete 6 Sort by marks 7 Save 8 Load 9 Report 10 Exit\\nChoice: ");
        if(scanf("%d",&ch)!=1)break;
        switch(ch) {
            case 1:add();
            break;
            case 2:view();
            break;
            case 3:search_student();
            break;
            case 4:update();
            break;
            case 5:delete_student();
            break;
            case 6:qsort(a,n,sizeof *a,cmp);
            puts("Sorted");
            break;
            case 7:save();
            break;
            case 8:load();
            break;
            case 9:report();
            break;
            case 10:break;
            default:puts("Invalid choice");
        }
    }
    while(ch!=10);
    free(a);
    return 0;
}
